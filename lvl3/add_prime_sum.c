#include <unistd.h>
int ft_atoi(char *s)
{
	int	i;
	int res;

	i = 0; 
	res = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res);
}

void ft_putnbr(int	n)
{
	int digit;

	if (n > 9)
		ft_putnbr(n / 10);
	digit = (n % 10) + '0';
	write(1, &digit, 1);
}

int	is_prime(int	n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
int	ft_add_prime_sum(int	n)
{
	int	i;
	int sum;

	sum = 0;
	i = 2;
	while (i <= n)
	{
		if (is_prime(i) == 1)
			sum = sum + i;
		i++;
	}
	return (sum);
}

int main(int argc, char *argv[])
{
	int	n;

	if (argc == 2 && (n = ft_atoi(argv[1])))
		ft_putnbr(ft_add_prime_sum(n));
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}