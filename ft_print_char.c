/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:45:08 by ados-rei          #+#    #+#             */
/*   Updated: 2022/03/10 17:24:34 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Function to print arguments of type char. Return 1 (the size of char).*/
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}
