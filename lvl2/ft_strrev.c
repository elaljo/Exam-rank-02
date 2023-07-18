#include <unistd.h>
char *ft_strrev(char *str)
{
	int	i;
	int len;
	char tmp;

	len = 0;
	tmp = 0;
	while (str[len])
		len++;
	len--;
	i = 0;
	while (len > i)
	{
		tmp = str[len];
		str[len] = str[i];
		str[i] = tmp;
		len--;
		i++;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char str[] = "elalj";
	printf("%s\n",ft_strrev(str));
	return (0);
}