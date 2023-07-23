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
	if (argc == 3)
	{
		int	i;
		int	j;
		char *s1;
		char *s2;

		s1 = argv[1];
		s2 = argv[2];
		i = 0;
		while (s2[i])
		{
			if (s2[i] == s1[j])
				j++;
			i++;
		}
		if (ft_strlen(s1) == j)
		{
			j = 0;
			while (s1[j])
			{
				write(1, &s1[j], 1);
				j++;
			}
		}
	}
	write(1, "\n", 1);
}