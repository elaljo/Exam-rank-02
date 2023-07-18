#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a = 5;
	int b = 10;
	printf("%d\n", a);
	printf("%d\n", b);
	ft_swap(&a, &b);
	printf("after call func\n");
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}
