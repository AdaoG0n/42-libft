#include <stdio.h>
int	main()
{
	char str[] = "_42 Libft!";
	int	i = 0;
	while(str[i])
	{
	printf("%c: %d\n", str[i], ft_isalpha(str[i]));
	i++;
	}
	return(0);
}
