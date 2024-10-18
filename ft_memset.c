#include "libft.h"

void	*ft_memset(void *s, int x, size_t i)
{
       	unsigned char *ptr;
	
	ptr = (unsigned char *)s;
	while (i > 0)
	{
		*ptr++ = (unsigned char) x;
		--i;
	}
	return (s);
}

