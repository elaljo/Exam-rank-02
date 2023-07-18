#include <unistd.h>

int ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int len;

		len = ft_strlen(argv[1]) - 1;
		while (0 <= len)
		{
			write(1, &argv[1][len], 1);
			len--;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
