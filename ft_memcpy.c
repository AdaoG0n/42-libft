#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	*d = (unsigned char *) dest;
	*s = (const unsigned char *) src;
	if (!dest && !src)
		return NULL;
	while (n--)
		*d++ = *s++;
	return dest;
}
