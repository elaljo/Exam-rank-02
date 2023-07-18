#include <string.h>
#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int main()
{
	const char *s = "Mohamed elalj";
	const char *reject = "Moh";

	size_t length = strcspn(s, reject);

	printf("length of prefix substring not containing ' ' %zu\n", length);
	printf("length of prefix substring not containing ' ' %zu\n", ft_strcspn(s , reject));
}