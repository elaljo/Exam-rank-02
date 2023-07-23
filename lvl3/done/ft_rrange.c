#include <stdlib.h>
int	*ft_rrange(int start, int end)
{
	int	*tab;
	int	i;
	int	size;

	size = abs(start - end) + 1;
	i = 0;
	tab = malloc(size * sizeof(int));
	while (start > end)
	{
		tab[i] = end;
		end++;
		i++;
	}
	while (start <= end)
	{
		tab[i] = end;
		end--;
		i++;
	}
	return (tab);
}

#include <stdio.h>
int main()
{
	int	*tab;
	int size;
	int	i;
	int start;
	int end;

	start = 0;
	end = -3;
	size = abs(start - end) + 1;
	tab = ft_rrange(start, end);
	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}