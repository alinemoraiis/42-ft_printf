/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:08:42 by ados-rei          #+#    #+#             */
/*   Updated: 2022/03/10 17:40:48 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> ft_printf - Main function.                                            */
/*   -> ft_format - Check which format is the next argument.                  */
/*   -> g_len - Global variable to return the size of the printed string.     */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_format(const char format, va_list args)
{
	int	str_len;

	if (format == 'c')
		str_len += ft_print_char(va_arg(args, int));
	else if (format == 's')
		str_len += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		str_len += ft_print_ptr(va_arg(args, unsigned long));
	else if (format == 'd' || format == 'i')
		str_len += ft_print_nbr(va_arg(args, int));
	else if (format == 'u')
		str_len += ft_print_uns(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		str_len += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		str_len += ft_print_char('%');
	return (str_len);
}

int	ft_printf(const char *format, ...)
{
	int		cont;
	int		str_len;
	va_list	args;

	str_len = 0;
	cont = 0;
	va_start(args, format);
	while (format[cont] != '\0')
	{
		if (format[cont] == '%')
		{
			str_len += ft_format(format[cont + 1], args);
			cont++;
		}
		else
		{
			ft_print_char(format[cont]);
			str_len += 1;
		}
		cont++;
	}
	va_end(args);
	return (str_len);
}
