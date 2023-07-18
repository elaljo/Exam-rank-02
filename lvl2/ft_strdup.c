#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	int	i;
	char *str;

	i = 0;
	while (src[i])
		i++;
	str = malloc(i * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = src[i];
	return (str);
}

int main()
{
	char *str;

	str = "momed";
	printf("%s\n", ft_strdup(str));
	printf("%s\n", strdup(str));
}