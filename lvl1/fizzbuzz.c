#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_num(int nb)
{
    if (nb > 9)
    {
        ft_num(nb / 10);
        ft_num(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}
int main()
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if ((i % 5 == 0) && (i % 3 == 0))
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_num(i);
        ft_putchar('\n');
        i++;
    }
    return (0);
}