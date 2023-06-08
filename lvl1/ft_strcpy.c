char *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char s1[20] = "mohqmed";
//     char s2[20] = "elalj";

//     printf("%s\n",strcpy(s1,s2));
//     printf("%s\n",ft_strcpy(s1,s2));
//     return (0);
// }