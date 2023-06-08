void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

// #include <stdio.h>
// int main()
// {
//     int a;
//     int b;

//     a = 5;
//     b = 20;
//     ft_swap(&a, &b);
//     printf("%d %d", a, b);
//     return (0);
}