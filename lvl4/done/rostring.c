#include <unistd.h>
int main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		int	i;
		char *s;

		s = argv[1];
		i = 0;
		while (s[i] && s[i] == ' ')
			i++;
		while (s[i] && s[i] != ' ')
			i++;
		if (s[i])
			i++;
		while (s[i])
		{
			if (s[i] != ' ')
				write(1 ,&s[i], 1);
			else if (s[i] && s[i - 1] != ' ' && s[i] == ' ')
				write(1, " ", 1);
			i++;
			if (s[i] == '\0' && s[i - 1] != ' ')
				write(1, " ", 1);
		}
		i = 0;
		while ((s[i] == ' ' || s[i] == '\t') && s[i])
			i++;
		while (s[i] != ' ' && s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}