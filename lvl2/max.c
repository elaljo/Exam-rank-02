int max(int	*tab, unsigned int len)
{
	unsigned int i;
	int	res;

	i = 0;
	res = tab[0];
	while (i < len)
	{
		if (res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}

#include <stdio.h>

int	main(void)
{
	int	arr[4];

	arr[0] = 78;
	arr[1] = 2;
	arr[2] = 45;
	arr[3] = 49;
	printf("%d\n", max(arr, 4));
	return (0);
}