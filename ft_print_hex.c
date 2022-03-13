/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:50:21 by ados-rei          #+#    #+#             */
/*   Updated: 2022/03/10 17:27:18 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Function to print hexadecimal type arguments. Return the lenght of    */
/*      hexadecimal.                                                          */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_x(unsigned int x, char format)
{
	if (x >= 16)
	{
		ft_x(x / 16, format);
		ft_x(x % 16, format);
	}
	else
	{
		if (x <= 9)
			ft_print_char(x + '0');
		else
		{
			if (format == 'x')
				ft_print_char(x - 10 + 'a');
			else if (format == 'X')
				ft_print_char(x - 10 + 'A');
		}
	}
}

int	ft_print_hex(unsigned int x, char format)
{
	int	len;

	len = 0;
	ft_x(x, format);
	if (x == 0)
		len++;
	while (x != 0)
	{
		len += 1;
		x = x / 16;
	}
	return (len);
}
