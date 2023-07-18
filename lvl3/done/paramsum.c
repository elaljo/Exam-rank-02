#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb)
{
	char digit;

	if (nb > 9)
		ft_putnbr(nb / 10);
	digit = (nb % 10) + '0';
	write(1, &digit, 1);
}
int main(int argc , char *argv[])
{
	(void)argv;
		ft_putnbr(argc - 1);
		write(1, "\n", 1);
	return (0);
}