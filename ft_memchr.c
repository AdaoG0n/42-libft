#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr;
    unsigned char byte;

    ptr = (unsigned char *)s;
    byte = (unsigned char)c;
    while (n--)
    {
        if (*ptr == byte)
            return (ptr);
        ptr++;
    }
    return (NULL);
}
