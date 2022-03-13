/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:47:02 by ados-rei          #+#    #+#             */
/*   Updated: 2022/03/10 17:30:10 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Function to print pointer type arguments. Return the length of the    */
/*      pointer.                                                              */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_ptr(uintptr_t p)
{
	if (p >= 16)
	{
		ft_ptr(p / 16);
		ft_ptr(p % 16);
	}
	else
	{
		if (p <= 9)
			ft_print_char(p + '0');
		else
			ft_print_char(p - 10 + 'a');
	}
}

int	ft_print_ptr(unsigned long p)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (p == 0)
		len += write(1, "0", 1);
	else
	{
		ft_ptr(p);
		while (p != 0)
		{
			len += 1;
			p = p / 16;
		}
	}
	return (len);
}
