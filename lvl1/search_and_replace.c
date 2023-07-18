#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		char *s1;
		char *s2;
		char *s3;
		int i;

		s1 = argv[1];
		s2 = argv[2];
		s3 = argv[3];
		i = 0;
			if (((s2[0] >= 'a' && s2[0] <= 'z') || (s2[0] >= 'A' && s2[0] <= 'Z')) && s2[1] == '\0')
				if (((s3[0] >= 'a' && s3[0] <= 'z') || (s3[0] >= 'A' && s3[0] <= 'Z')) && s3[1] == '\0')
				{
					while (s1[i])
					{
						if (s1[i] == s2[0])
							s1[i] = s3[0];
							write(1, &s1[i], 1);
							i++;
					}
				}
	}
	write(1, "\n", 1);
	return (0);
}