/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:42:01 by gapoulai          #+#    #+#             */
/*   Updated: 2020/12/14 09:35:56 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void			ft_bzero(void *s, size_t n);
int				ft_atoi(const char *str);
int				ft_atoi_base(char *str, char *base);
void			*ft_calloc(size_t count, size_t size);
char			*ft_convert_base(char *nbr, char *base_from, char *base_to);
int				ft_count(char *str, int c);
int				ft_get_index(char *s, int c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_ischarset(int c, char *charset);
int				ft_isprint(int c);
int				ft_isspace(int c);
char			*ft_itoa(int n);
void			ft_lstadd_front(t_list **alst, t_list *new);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstdelone(t_list *lst, void (*del)(void *));
t_list			*ft_lstlast(t_list *lst);
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *));
int				ft_lstsize(t_list *lst);
t_list			*ft_lstnew(void *content);
int				ft_math_factorial(int nb);
int				ft_math_fibonacci(int index);
int				ft_math_isprime(int nb);
long long		ft_math_max(long long a, long long b);
long long		ft_math_min(long long a, long long b);
int				ft_find_next_prime(int nb);
int				ft_math_power(int nb, int power);
int				ft_math_sqrt(int nb);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);
size_t			ft_nblen(long long nb);
int				ft_popnbr(int base, int next);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(long long n, int fd);
void			ft_putstr_fd(char *s, int fd);
void			*ft_realloc(void *s, size_t size);
void			ft_rev_tab(char *tab);
char			**ft_split(char const *s, char c);
char			*ft_strcat(char *dest, char *src);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlen(const char *s);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strndup(const char *s, size_t size);
char			*ft_strnstr(const char *haystack,
const char *needle, size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
void			ft_swap(char *a, char *b);
int				ft_tolower(int c);
int				ft_toupper(int c);

#endif
