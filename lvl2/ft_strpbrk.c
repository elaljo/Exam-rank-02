#include <string.h>
#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	if (!s2)
		return(NULL);
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int main()
{
	const char *s1;
	const char *charset;

	s1 = "mohamed";
	charset = "med";

	printf("%s\n", ft_strpbrk(s1, charset));
	printf("%s\n", strpbrk(s1, charset));
	return (0);
}