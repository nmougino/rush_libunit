/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:46:12 by nmougino          #+#    #+#             */
/*   Updated: 2017/02/08 22:10:10 by nmougino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <fcntl.h>
# include "ft_printf.h"


/*
** portabilite
*/

typedef long int intmax_t;
typedef unsigned long int uintmax_t;

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_lstadd_top(t_list **alst, t_list *new);
void				ft_lstadd_end(t_list **alst, t_list *new);
void				ft_lstadd_sort(t_list **alst, t_list *new, int (*sfun)(void *, void *));

int					ft_abs(int nb);
intmax_t			ft_absmax(intmax_t nb);
char				*ft_arrglu(char **arg, char *separator, size_t size);
size_t				ft_arrlen(void *a, size_t type);
int					ft_atoi(const char *str);
size_t				ft_bitlen(uintmax_t p);
void				ft_bzero(void *s, size_t n);
extern void			ft_free(void *ptr);
int					ft_getlinesize(char *buf);
char				*ft_getlline(char *buf, int l);
int					ft_getnbrline(char *buf);
char				*ft_gotoline(char *buf, int l);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_islow(int c);
int					ft_isprint(int c);
int					ft_isup(int c);
char				*ft_itoa(int nb);
char				**ft_linesplit(char *s, char c);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
int					ft_max(int a, int b);
size_t				ft_maxst(size_t a, size_t b);
void				*ft_memalloc(size_t size);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
int					ft_min(int a, int b);
size_t				ft_minst(size_t a, size_t b);
size_t				ft_nbrlen(int nb);
size_t				ft_nbrlenbase(unsigned int nb, unsigned int base);
size_t				ft_nbrlenbasemax(uintmax_t nb, int base);
size_t				ft_nbrlenmax(intmax_t nb);
int					ft_pow(int nb, int pow);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbrendl(int n);
void				ft_putnbrendl_fd(int n, int fd);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
float				ft_sqrt(float nb);
char				*ft_stradd(char **s1, char const *s2);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strchr(const char *s, int c);
int					ft_strcloc(char c, char *ptr);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
void				ft_strdel(char **as);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strinc(char **ptr, int size, char c);
char				*ft_strdup(const char *s1);
void				ft_strinschar(char **src, size_t pos, char c);
void				ft_striter(char *s, void(*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *s);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
char				*ft_strrchr(const char *s, int c);
void				ft_strremchar(char **src, size_t pos);
char				*ft_strrev(char *str);
char				*ft_strstr(const char *s1, const char *s2);
char				**ft_strsplit(char const *s, char c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
void				ft_swapchar(char *a, char *b);
void				ft_swapint(int *a, int *b);
int					ft_tolower(int c);
int					ft_toupper(int c);

/*
** GNL FUNCTIONS
*/

# define GNL_BUFF_SIZE 1

int					get_next_line(int const fd, char **line);

#endif
