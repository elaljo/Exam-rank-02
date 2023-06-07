char *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i] && s1[i])
    {
        s1[i] = s2[i];
        i++;
    }
}

#include <string.h>
#include <stdio.h>
int main()
{
    char s1[20] = "mohamed";
    char s2[20] = "elal";

    printf("%s\n",strcpy(s1,s2));
    return (0);
}