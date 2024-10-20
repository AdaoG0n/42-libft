#include "libft.h"

int	ft_isalpha(int x)
{
	if (x < 0 || x > 255)
		return (0);
	if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		return (1);
	return (0);
}

