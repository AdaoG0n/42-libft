#include <stddef.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;

	src_len = strlen(src);
	if (size > 0)
	{
		while (*src && size > 1)
		{
			*dest++ = *src++;
			size--;
		}
		*dest = '\0';
	}
	return (src_len);
}

#include <stdio.h>

int main(void)
{
    char src[] = "Hello, World!";
    char dest1[20];
    char dest2[5];
    size_t result1, result2;

    result1 = ft_strlcpy(dest1, src, sizeof(dest1));
    printf("Case 1 (buffer higher):\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest1);
    printf("Returned length: %zu\n", result1);
    printf("Strlen of dest: %zu\n\n", strlen(dest1));

    result2 = ft_strlcpy(dest2, src, sizeof(dest2));
    printf("Case 2 (buffer lower):\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest2);
    printf("Returned length: %zu\n", result2);
    printf("Strlen of dest: %zu\n", strlen(dest2));

    return (0);
}
