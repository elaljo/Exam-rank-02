#include <unistd.h>

int main(int argc, char *argv[])
{
	char *s = argv[1];
	int i;

	if (argc == 2)
	{
		i = 0;
		while (s[i])
		{
			if (s[i] == 'z' || s[i] == 'Z')
				s[i] = s[i] - 25;
			else if ((s[i] >= 'a' && s[i] <= 'y') || (s[i] >= 'A' && s[i] <= 'Y'))
				s[i] = s[i] + 1;
			write(1 , &s[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}