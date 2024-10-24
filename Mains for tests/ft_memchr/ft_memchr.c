/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:39:20 by adamarqu          #+#    #+#             */
/*   Updated: 2024/10/21 11:39:21 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <stddef.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	byte;

	ptr = (unsigned char *)s;
	byte = (unsigned char)c;
	while (n--)
	{
		if (*ptr == byte)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

#include <stdio.h>

int	main()
{
	char str[] = "hello, world";
	unsigned char byte = 's';
	char *result;
	
	printf("String: %s\n", str);
	printf("Searching for: %c\n", byte);
	printf("\n");
	result = (char *)ft_memchr(str, byte, 12);
	if (result)
		printf("%c find in position %ld.\n", byte, result - str);
	else
		printf("Can't find %c\n", byte);
	return(0);
}
	
