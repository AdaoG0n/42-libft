#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
    const char *original = "Hello, world!";
    char *copy = ft_strdup(original);

    if (copy == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Original: %s\n", original);
    printf("Copy: %s\n", copy);

    free(copy);

    return 0;
}
