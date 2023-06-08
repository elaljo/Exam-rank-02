
int ft_strlen(char *str)
{
    int count;

    count = 0;
    while (str[count])
        count++;
    return (count);
}

// #include <stdio.h>
// int main()
// {
//     char *s = "mohamed";
//     printf("%d\n", ft_strlen(s));
//     return (0);
// }