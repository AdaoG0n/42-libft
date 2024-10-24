#include <stdio.h>

int	main(void)
{
	const char str[] = "Hello, World!";
	char byte = 'o';
	char *result = ft_strchr(str, byte);

	printf("Searching for: %c\n\n", byte);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("%c not found\n", byte);
	return (0);
}
