#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
int main()
{
	char s1[10] = "mo";
	char s2[10] = "elalj";
	printf("%s\n", ft_strcpy(s1, s2));
	printf("%s\n", strcpy(s1, s2));
	return (0);
}
