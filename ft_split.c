/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:40:13 by adamarqu          #+#    #+#             */
/*   Updated: 2024/10/21 11:40:14 by adamarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*get_next_word(char const **s, char c)
{
	char const	*word_start;
	size_t		word_len;

	word_start = *s;
	word_len = 0;
	while (**s && **s != c)
	{
		(*s)++;
		word_len++;
	}
	return (ft_substr(word_start, 0, word_len));
}

static void	*free_split(char **split, size_t count)
{
	while (count--)
		free(split[count]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;
	size_t	i;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = ft_calloc(word_count + 1, sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			result[i] = get_next_word(&s, c);
			if (!result[i])
				return (free_split(result, i));
			i++;
		}
	}
	return (result);
}
