#include "libft.h"

void	*ft_memset(void *s, int x, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = (unsigned char) x;
	return (s);
}
