/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:18:43 by tkerroum          #+#    #+#             */
/*   Updated: 2023/12/08 16:22:15 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *str, ...)
{
	va_list ptr;
	va_start(ptr,str);
	int counter;
	int i;

	counter = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == '%')
			counter += ft_putchar('%');
		else if (str[i] == '%' && str[i + 1] == 'c')
			counter += ft_putchar(va_arg(ptr,int));
		else if (str[i] == '%' && str[i + 1] == 's')
			counter += ft_putstr(va_arg(ptr,char *));
		else if (str[i] == '%' && str[i + 1] == 'p')
			counter += 
		else
			counter += ft_putchar(str[i]);
	}
}