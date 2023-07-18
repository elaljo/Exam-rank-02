#include <unistd.h>
int main(int argc , char *argv[])
{
	if (argc == 2)
	{
		int	i;
		char *s;

		s = argv[1];
		i = 0;
		while (s[i])
			i++;
		i--;
		while (s[i] == ' ' || s[i] == '\t')
			i--;
		while (s[i] && s[i] != ' ' && s[i] != '\t')
			i--;
		i++;
		while (s[i] && s[i] != ' ' && s[i] != '\t')
		{
			write(1, &s[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}