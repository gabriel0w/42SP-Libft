#ifndef LIBFT_H
#include <stddef.h>

int    ft_isalnum(int    c);
int    ft_isalpha(int    c);
int    ft_isascii(int    c);
int    ft_isdigit(int    c);
int    ft_isprint(int    c);
size_t	ft_strlen(const char *s);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char *ft_strchr(const char *s, int c);
int    ft_tolower(int    c);
int    ft_toupper(int    c);
void *ft_memset(void *s, int c, size_t n);

#endif