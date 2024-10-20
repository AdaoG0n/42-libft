#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
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

