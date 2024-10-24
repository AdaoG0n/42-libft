#include <stdio.h>

int	main()
{
	char str[] = "hello, world";
	unsigned char byte = 's';
	char *result;
	
	printf("String: %s\n", str);
	printf("Searching for: %c\n", byte);
	printf("\n");
	result = (char *)ft_memchr(str, byte, 12);
	if (result)
		printf("%c find in position %ld.\n", byte, result - str);
	else
		printf("Can't find %c\n", byte);
	return(0);
}
	
