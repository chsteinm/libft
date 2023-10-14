#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int     ft_isalpha(char c);
int     ft_isdigit(char c);
int     ft_isalnum(char c);
int     ft_isascii(char c);
int     ft_strlen(char *str);
void    *ft_memset(char *str, int c, int size);
void    *ft_bzero(char *str, int size);
void    *ft_memcpy(void *dest, void *src, int n);
void    *ft_memmove(void *dest, void *src, int n);
void    *ft_memchr(const void *src, int c, int n);
int     ft_strlcat(char *dst, const char *src, unsigned int size);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_substr(char const *s, unsigned int start, size_t len);
void    *ft_calloc(size_t count, size_t size);
int     ft_memcmp(const void *str1, const void *str2, int n);
char    *ft_strchr(const char *str, int c);
char    *ft_strdup(char *src);
char    *ft_strjoin(int size, char **strs, char *sep);
int     ft_strlcpy(char *dst, const char *src, int dstsize);
int     ft_strncmp(const char *s1, const char *s2, int n);
char    *ft_strnstr(const char *haystack, const char *needle, int len);
char    *ft_strrchr(const char *s, int c);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
void    ft_putchar_fd(char c, int fd);
void    ft_putnbr_fd(int n, int fd);
char    *ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);

#endif

