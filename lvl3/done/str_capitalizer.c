#include <unistd.h>
void	ft_str_cap(char *s)
{
	int	i;

	i = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	write(1, &s[0], 1);
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == ' ' || s[i - 1] == '\t'))
			s[i] -= 32;
		write(1, &s[i], 1);
		i++;
	}
}
int main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		int	i;

		i = 1;
		while (argc > i)
		{
			ft_str_cap(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}