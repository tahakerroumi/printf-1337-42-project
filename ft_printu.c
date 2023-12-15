/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:47:33 by tkerroum          #+#    #+#             */
/*   Updated: 2023/12/15 01:47:36 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printu(unsigned int num)
{
	unsigned int	counter;
	long			numb;

	numb = num;
	counter = 0;
	if (numb >= 10)
		counter += ft_putnbr(numb / 10);
	if (numb >= 0 && numb <= 9)
		counter += ft_putchar(numb % 10 + 48);
	return (counter);
}
