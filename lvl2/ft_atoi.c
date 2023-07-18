int ft_atoi(const char *str)
{
	int	i;
	long int	res;
	long int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
		if (str[i] == '-' || str[i] == '+')
			break ;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + str[i] - '0';
		else
			break;
		i++;
	}
	return (res * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	const	char *str;

	str = "     42d0.5d5medlj";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return (0);
}