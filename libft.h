#ifndef LIBFT_H
#define LIBFT_H

int	ft_isalpha(int x);
int	ft_isdigit(int x);
int	ft_isalnum(int x);
int	ft_isascii(int x);
int	ft_isprint(int x);
size_t	ft_strlen(const char *s);
void    ft_bzero(void *s, size_t n);
void    *ft_memset(void *s, int x, size_t i);
void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif
