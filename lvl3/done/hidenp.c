#include <unistd.h>


int ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void hidenp(char *s1, char *s2)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (s2[i2])
	{
		if (s1[i1] == s2[i2])
			i1++;
		i2++;
	}
	if (i1 == ft_strlen(s1))
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int main(int argc , char *argv[])
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}