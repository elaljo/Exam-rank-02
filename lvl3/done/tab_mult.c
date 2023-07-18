#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int res;

	 i = 0;
	 res = 0;
	 while (str[i])
	 {
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + str[i] - '0';
			i++;
	 }
	 return (res);
}
void ft_putnbr(int nb)
{
	int	digit;

	if (nb > 9)
		ft_putnbr(nb / 10);
	digit = (nb % 10) + '0';
	write(1, &digit, 1);
}

void	tab_mult(char *str)
{
	int	i;
	int	n;

	i = 1;
	n = ft_atoi(str);
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(n * i);
		write(1, "\n", 1);
		i++;
	}
}
int main(int argc, char *argv[])
{
	if (argc == 2)
		tab_mult(argv[1]);
	else
		write(1, "\n", 1);
}