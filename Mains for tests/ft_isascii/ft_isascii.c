#include <stdio.h>

int	main()
{
	unsigned char str[] = "123abc_ !\n@#$%^&*(){}[]<>?/|\\\x80\xA0\xFF";
	int i = 0;
	
	while (str[i])
	{
		printf("%d (%c): %d\n", str[i], str[i] >= 32 && str[i] < 127 ? str[i] : ' ', ft_isascii(str[i]));
		i++;
	}
	return (0);
}
