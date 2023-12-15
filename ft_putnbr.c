
#include "libftprintf.h"

int	ft_putnbr(int num)
{
	int count;

	count = 0;
	if (num == -2147483648)
	{
		count += ft_putstr("-21");
		count += ft_putnbr(47483648);
	}
	if (num < 0)
	{
		count += ft_putchar('-');
		count += ft_putnbr(num * (-1));
	}
	if (num >= 10)
		count += ft_putnbr(num / 10);
	if (num >= 0 && num <= 9)
		count += ft_putchar(num % 10 + 48);
	return (count);
}