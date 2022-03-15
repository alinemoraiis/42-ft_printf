/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ados-rei <ados-rei@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:24:57 by ados-rei          #+#    #+#             */
/*   Updated: 2022/03/10 17:36:54 by ados-rei         ###   ########.fr       */
/*                                                                            */
/*   -> Header file with all functions declarations of my ft_printf function. */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	    ft_printf(const char *str, ...);
int	    ft_print_char(int c);
int	    ft_print_str(char *s);
int	    ft_print_ptr(unsigned long p);
int	    ft_print_nbr(int d);
int	    ft_print_uns(unsigned int u);
int	    ft_print_hex(unsigned int x, char format);
void    ft_putnbr_fd(int n, ind fd);

#endif
