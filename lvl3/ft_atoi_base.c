
char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int get_digit(char c, int digits_in_base)
{
	int max_digit;

	if (digits_in_base <= 10)
		max_digit = digits_in_base + '0';
	else
		max_digit = digits_in_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int sign;
	int res;
	int digit;

	i = 0;
	sign = 1;
	res = 0;
	if (str[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	while (digit = get_digit(to_lower(str[i]), str_base) >= 0)
	{
		res = res * str_base;
		res = res + digit;
		i++;
	}
	return (res * sign);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi_base("Ceci permet de decouvrir le fonctionnement de ton ft_atoi_base.", 16));
	printf("%d\n", ft_atoi_base("B", 16));
	printf("%d\n", ft_atoi_base("C", 16));
	printf("%d\n", ft_atoi_base("D", 16));
	printf("%d\n", ft_atoi_base("e", 16));
	printf("%d\n", ft_atoi_base("E", 16));
	return (0);
}