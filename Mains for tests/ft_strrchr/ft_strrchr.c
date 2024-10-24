#include <stdio.h>

int	main(void)
{
	char str[] = "Hello, World!";
	char byte = 'a';
	const char *result = ft_strrchr(str, byte);

	printf("String: %s\n", str);
	printf("Searching for: %c\n\n", byte);

	if(result)
		printf("Found: %s\n", result);
	else
		printf("(%c) not found.\n", byte);
}
