int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);

}

// #include <string.h>
// #include <stdio.h>

// int main()
// {
//     char *s1;
//     char *s2;

//     s1 = "aa";
//     s2 = "a";
//     printf("%d\n", strcmp(s1, s2));
//     printf("%d\n", ft_strcmp(s1, s2));
//     return (0);
}