#include <stdio.h>
#include <stdlib.h>

void	ft_pgcd(int n1, int n2)
{
	int	n = n1;

	while (n > 0)
	{
		if (n1 % n == 0 && n2 % n == 0)
		{
			printf("%d", n);
			return ;
		}
		n--;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		ft_pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}
