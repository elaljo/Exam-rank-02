#include <unistd.h>
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int	i;
		int	j;
		char *s;

		s = argv[1];
		i = 0;
		while (s[i])
			i++;
		i--;
		j = i;
		while (j >= 0)
		{
			i = j;
			while (s[i] != ' ' && s[i])
			{
				i--;
				j--;
			}
			i++;
			while (s[i] && s[i] != ' ')
			{
				write(1, &s[i], 1);
				i++;
			}
			if (s[j] == ' ')
				write(1, " ", 1);
			j--;
		}
	}
	write(1, "\n", 1);
}