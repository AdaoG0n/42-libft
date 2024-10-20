#include "libft.h"

int	ft_isprint(int x)
{
	if (x < 0 || x > 255)
		return (0);
	if (x >= 32 && x <= 126)
		return (1);
	return (0);
}
