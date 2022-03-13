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

int	g_len;

va_list	ft_format(const char format, va_list args)
{
	if (format == 'c')
		g_len += ft_print_char(va_arg(args, int));
	else if (format == 's')
		g_len += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		g_len += ft_print_ptr(va_arg(args, unsigned long));
	else if (format == 'd' || format == 'i')
		g_len += ft_print_nbr(va_arg(args, int));
	else if (format == 'u')
		g_len += ft_print_uns(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		g_len += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		g_len += ft_print_char('%');
	return (args);
}

int	ft_printf(const char *format, ...)
{
	int		cont;
	va_list	args;

	g_len = 0;
	cont = 0;
	va_start(args, format);
	while (format[cont] != '\0')
	{
		if (format[cont] == '%')
		{
			args = ft_format(format[cont + 1], args);
			cont++;
		}
		else
		{
			ft_print_char(format[cont]);
			g_len += 1;
		}
		cont++;
	}
	va_end(args);
	return (g_len);
}
