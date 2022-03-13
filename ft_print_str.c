/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:46:13 by ados-rei          #+#    #+#             */
/*   Updated: 2022/03/10 17:37:57 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Function to print arguments of type string. Return the size of the    */
/*      string.                                                               */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_str(char *s)
{
	int	len;

	len = 0;
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[len] != '\0')
	{
		write(1, &s[len], 1);
		len++;
	}
	return (len);
}
