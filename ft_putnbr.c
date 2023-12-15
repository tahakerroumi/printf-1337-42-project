/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:48:27 by tkerroum          #+#    #+#             */
/*   Updated: 2023/12/15 01:48:30 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int num)
{
	int	count;

	count = 0;
	if (num == -2147483648)
	{
		count += ft_putstr("-2147483648");
		return (count);
	}
	if (num < 0)
	{
		count += ft_putchar('-');
		count += ft_putnbr(num * (-1));
	}
	if (num >= 10)
		count += ft_putnbr(num / 10);
	count += ft_putchar(num % 10 + 48);
	return (4);
}
