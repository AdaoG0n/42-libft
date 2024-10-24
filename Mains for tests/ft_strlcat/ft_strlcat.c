#include <stdio.h>
#include <string.h>
#include <stddef.h>

int main(void)
{
    char dest[20] = "Hello";
    const char *src = " World!";
    size_t size = sizeof(dest);
    size_t result;

    printf("Before ft_strlcat:\n");
    printf("dest: %s\n", dest);
    printf("src: %s\n", src);
    printf("buffer size: %zu\n\n", size);

    result = ft_strlcat(dest, src, size);

    printf("After ft_strlcat:\n");
    printf("dest: %s\n", dest);
    printf("returned value: %zu\n", result);
    printf("length of dest: %zu\n", strlen(dest));

    return 0;
}
