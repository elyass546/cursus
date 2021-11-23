/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 22:32:24 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/22 22:32:27 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *param, ...);
int		ft_conv_hex_low(unsigned int nbr);
int		ft_conv_hex_upp(unsigned int nbr);
int		check(char param, va_list lst);
int		print_hexadd(void *nbr);
int		uns_nbr(unsigned int nbr);
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_nbrlen(long nb);

/*****************************/

size_t	ft_strlen(const char *str);

#endif
