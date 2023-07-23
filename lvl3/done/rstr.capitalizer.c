#include <unistd.h>
#include <stdio.h>

void	ft_rstr_cap(char *s)
{
	int	i;
	int c ;
	i = 0;
	while (s[i] != '\0')
	{
		c = s[i];
		if (s[i] >= 'A' && s[i] <= 'Z')
			c = s[i] + 32;
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i + 1] == '\0' || s[i + 1] == ' ' || s[i + 1] == '\t'))
			c = s[i] - 32;
		write(1, &c, 1);
		i++;
	}
}
int main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		int i;

		i = 1;
		while (argc > i)
		{
			ft_rstr_cap(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}