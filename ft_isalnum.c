#include "libft.h"

int	ft_isalnum(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')
			|| (x >= '0' && x <= '9'))
		return (1);
	return (0);
}


