#include <unistd.h>

int main (int argc, char *argv[])
{
	int i;
	char *s = argv[1];
	i = 0;
	if (argc == 2)
	{
		while (s[i])
		{
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
				s[i] = s[i] + 13;
			else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
				s[i] = s[i] - 13;
			write(1, &s[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}