#include "libft.h"

int	ft_isalpha(int x)
{
	if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		return (1);
	return (0);
}

