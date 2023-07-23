#include <stdlib.h>
#include <stdio.h>

int	value_abs(int	n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_range(int start, int end)
{
	int	*tab;
	int i;
	int size;

	size = value_abs(start - end) + 1;
	i = 0;
	tab = malloc(size * sizeof(int));
	if (!tab)
		return (0);
	while (start > end)
	{
		tab[i] = start;
		start--;
		i++;
	}
	while (start <= end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	return (tab);
}

int	main()
{
	int	*tab;
	int	i;
	int start;
	int end;
	int size;

	i = 0;
	start = 1;
	end = -3;
	tab = ft_range(start, end);
	size = value_abs(start - end) + 1;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}