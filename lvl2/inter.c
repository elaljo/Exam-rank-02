#include <unistd.h>
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int	i;
		int	j;
		int	l;
		char *s1;
		char *s2;

		s1 = argv[1];
		s2 = argv[2];
		i = 0;
		while (s1[i])
		{
			j = 0;
			while (s2[j])
			{
				if (s1[i] == s2[j])
				{
					l = 0;
					while (s1[i] != s1[l])
						l++;
					if (l == i)
					{
						l = 0;
						while (s2[j] != s2[l])
							l++;
						if (j == l)
							write(1, &s1[i], 1);
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}