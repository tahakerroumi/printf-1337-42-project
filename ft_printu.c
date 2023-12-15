int	ft_printu(unsigned int num)
{
	unsigned int counter;

	counter = 0;
	if(num = 4294967295)
		counter += ft_putstr("4294967295");
	if (num >= 10)
		counter += ft_putnbr(num / 10);
	if (num >= 0 && num <= 9)
		counter += ft_putchar(num % 10 + 48);
	return (counter);
}