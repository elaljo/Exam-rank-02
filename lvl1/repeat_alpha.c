#include <unistd.h>

void    repeat(char c, int pos)
{
    while (pos >= 0)
    {
        write(1, &c, 1);
        pos--;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int pos;
        int i;

        i = 0;
        pos = 0;
        while (argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                pos = argv[1][i] - 'A';
                repeat(argv[1][i], pos);
            }
            else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                pos = argv[1][i] - 'a';
                repeat(argv[1][i] , pos);
            }
            else
                write(1, &argv[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
    return (0);
}