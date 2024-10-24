#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main()
{
	char str1[] = "Hello, World!";
	char str2[] = "Hello, Wordl!";
	int result = ft_strncmp(str1,str2,12);

	printf("String 1: %s\n", str1);
	printf("String 2: %s\n\n", str2);
	
	if(result != 0)
		printf("Diference: %d\n", result);
	else
		printf("Strings are equal up to the specified length.\n");
	return (0);
}
