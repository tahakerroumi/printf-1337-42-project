#include"libftprintf.h"
#include <stdio.h>

int	ft_printhex(unsigned long num, int a)
{
	int counter;
	char *str;

	counter = 0;
	if (a == 1)
		str = "0123456789abcdef";
	if (a == 2)
		str = "0123456789ABCDEF";
	if (num >= 16)
	{
		counter += ft_printhex(num / 16, a);
		counter += ft_putchar(str[num % 16]);
	}
	if (num < 16)
		counter += ft_putchar(str[num % 16]);
	return (counter);
}
int main ()
{
	printf("%X\n",10);
	ft_printhex(10,2);
}
