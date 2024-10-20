#include "libft.h"

int	ft_isdigit(int x)
{
	if (x < 0 || x > 255)
		return (0);
	if (x >= '0' && x <= '9')
		return (1);
	return (0);
}
