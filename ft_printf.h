/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 21:26:28 by tkerroum          #+#    #+#             */
/*   Updated: 2023/12/08 16:26:14 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_putchar(char c);
int	ft_printp(unsigned long int num);
int	ft_putstr(char *str);
int	ft_printf(const char *str, ...);
int	ft_printhex(unsigned int num, int a);
int	ft_putnbr(int num);
int	ft_printu(unsigned int num);

#endif
