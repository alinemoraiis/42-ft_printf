/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:09:52 by ados-rei          #+#    #+#             */
/*   Updated: 2022/03/10 17:38:58 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Function to print integer type arguments. Return the lenght of the    */
/*      integer.                                                              */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_nbr(int d)
{
	int	len;

	len = 0;
	ft_putnbr_fd(d, 1);
	if (d <= 0)
		len++;
	while (d != 0)
	{
		len += 1;
		d = d / 10;
	}
	return (len);
}
