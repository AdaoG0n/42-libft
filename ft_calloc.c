#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (size && count > SIZE_MAX / size)
		return (NULL);
	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
