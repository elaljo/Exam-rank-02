#include <unistd.h>

int main (int argc , char *argv[])
{
	if (argc == 2)
	{
		int	i;
		char *s;

		s = argv[1];
		i = 0;
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		while (s[i])
		{
			if (s[i] == ' ' || s[i] == '\t')
			{
				if (s[i + 1] != ' ' && s[i + 1])
					write(1, " ", 1);
			}
			else if (s[i] != ' ' && s[i] != '\t' && s[i])
				write(1, &s[i], 1);
			i++;
		}
	}
}