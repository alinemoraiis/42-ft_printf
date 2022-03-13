/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:21:03 by ados-rei          #+#    #+#             */
/*   Updated: 2022/03/10 17:33:11 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Funtion to print unsigned integer type arguments. Return the lenght   */
/*      of the integer.                                                       */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_u_len(unsigned int u)
{
	int		len;

	len = 0;
	while (u != 0)
	{
		u = u / 10;
		len++;
	}
	return (len);
}

int	ft_print_uns(unsigned int u)
{
	int		len;
	int		len2;
	char	*nbr;

	len = ft_u_len(u);
	len2 = len;
	if (u == 0)
	{
		ft_print_nbr(0);
		return (1);
	}
	nbr = (char *)malloc(sizeof(char) * (len2 + 1));
	if (nbr == NULL)
		return (0);
	nbr[len2] = '\0';
	while (u != 0)
	{
		nbr[len2 - 1] = u % 10 + 48;
		u = u / 10;
		len2--;
	}
	ft_print_str(nbr);
	free(nbr);
	return (len);
}
