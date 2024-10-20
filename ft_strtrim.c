#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t start, end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	return (ft_substr(s1, start, end - start));
}