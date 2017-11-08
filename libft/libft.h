/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 15:51:07 by mgautier          #+#    #+#             */
/*   Updated: 2017/01/15 12:25:55 by mgautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "fifo.h"
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "list.h"
# include "bool.h"

/*
** Part One
*/

size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *src);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t len);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, const char *little,
								size_t len);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

/*
** Part Two
*/

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_gen_strdel(void *str);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char*));
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				**ft_free_string_array(char ***tab);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char *s);
void				ft_putendl(char *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(char *s, int fd);

/*
** Maths functions
*/

unsigned int		ft_int_square_root(unsigned int square);
unsigned int		ft_square_root_round_up(unsigned int square);

/*
** String functions
*/

t_lst				*f_strsplit_lst(char const *str, char c);
char				*f_strljoin(char const *str_1, char const *str_2,
									size_t size_1, size_t size_2);
char				*ft_strnew_char(size_t size, char c);
/*
** Some lst functions
*/

t_lst				*f_add_end_lst(t_lst *last_link, const void *content);
t_lst				*f_add_begin_lst(t_lst **begin_list, void *content);
t_lst				*f_lstnew(void const *content);
t_lst				*f_lstpush(void const *content, t_lst **list);
void				f_lstdelone(t_lst **alst, void (*del)(void*));
void				f_lstdel(t_lst **alst, void (*del)(void*));
void				f_lstiter(t_lst *lst, void (*f)(t_lst *elem));
t_lst				*f_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elem));
t_lst				*f_lstmapi(t_lst *lst,
								t_lst *(*f)(t_lst *elem, unsigned int index));
unsigned int		f_check_list(t_lst list, t_bool (*f)(t_lst *elem));
t_lst				*f_lst_every_valid(t_lst *list,
										t_bool (*test)(const t_lst *link));
void				*f_lstsearch(const t_lst *list, const int ref,
									int (*match)(const t_lst *elem));
t_bool				f_lstremoveif_one(t_lst **lst, int ref,
					int (*match)(const t_lst *elem), void (*del)(void*));
void				*f_lstpop(t_lst **list);
unsigned int		f_lst_len(const t_lst *lst);

/*
** Fifo functions
*/

t_fifo				*f_fifo_create(void);
t_lst				*f_fifo_extract(t_fifo **fifo);
t_fifo				*f_fifo_destroy(t_fifo **fifo, void (*del)(void *content));
t_fifo				*f_fifo_add(t_fifo *fifo, const void *content);
void				*f_fifo_take(t_fifo *fifo);

/*
** List functions
*/

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstmapi(t_list *lst,
								t_list *(*f)(t_list *elem, unsigned int index));
t_list				*ft_add_end_list(t_list *last_link, const void *content,
									size_t content_size);
unsigned int		ft_check_list(t_list *list, t_bool (*f)(t_list *elem));

/*
** Miscellaneous
*/

void				no_destroy(void *precious_content);
/*
** Database interface
*/

typedef	enum	e_db_type
{
	DB_FILO_LIST,
	DB_TYPE_COUNT
}				t_db_type;
typedef	struct s_database	t_database;
t_database			*new_database(t_db_type type);

#endif
