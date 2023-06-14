#include <unistd.h>
// #include <stdlib.h>

int main(int ac, char *av[])
{
    int i;

    i = 0;
    while (av[1][i])
    {
        if (av[1][i] >= 'A' && av[1][i] <= 'Z')
        {
            write(1, "_", 1);
            av[1][i] = av[1][i] + ' ';
        }
        write(1, &av[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}

// int main(int ac, char *av[])
// {
//     int     i;
//     int     j;
//     char    *str;
//     char    l;

//     i = 0;
//     j = 0;
//     l = 0;
//     while (av[1][i])
//     {
//         if (av[1][i] >= 'A' && av[1][i] <= 'Z')
//             j++;
//         i++;
//         j++;
//     }
//     str = malloc(sizeof(char) * j);
//     i = 0;
//     j = 0;
//     while (av[1][i])
//     {
//         if (av[1][0] >= 'A' && av[1][0] <= 'Z')
//             av[1][0] = av[1][0] + 32;
//         while (av[1][i] >= 'A' && av[1][i] <= 'Z')
//         {
//             l = av[1][i] + 32;
//             str[j++] = '_';
//             str[j++] = l;
//             i++;
//         }
//         str[j] = av[1][i];
//         i++;
//         j++;
//     }
//     str[j] = '\0';
//     j = 0;
//     while (str[j])
//     {
//         write(1, &str[j], 1);
//         j++;
//     }
//     return (0);
// }