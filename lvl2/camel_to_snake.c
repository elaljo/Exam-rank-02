#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		char *s;
		int	i;

		s = argv[1];
		i = 0;
		while (s[i])
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				write (1, "_", 1);
				s[i] = s[i] + 32;			
			}
			write (1, &s[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}