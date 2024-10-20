#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *new_str;
    size_t i;

    if (!s || !f)
        return (NULL);
    new_str = ft_strdup(s);
    if (!new_str)
        return (NULL);
    i = 0;
    while (new_str[i])
    {
        new_str[i] = f((unsigned int)i, new_str[i]);
        i++;
    }
    return (new_str);
}