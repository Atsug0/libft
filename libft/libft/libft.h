/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsug0 <atsug0@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:39:13 by atsug0            #+#    #+#             */
/*   Updated: 2022/10/13 21:44:34 by atsug0           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include<unistd.h>
# include<stdlib.h>
# include<stdio.h>
# include<string.h>

typedef struct  s_list
{
    void    *content;
    struct s_list *next;
    
}               t_list;

void    ft_putchar_fd(char c, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_striteri(char *s, void (*f)(unsigned int,char*));
void    ft_bzero(void *s, size_t n);
void    ft_putstr_fd(char *s, int fd);
void    ft_lstclear(t_list **lst, void (*del)(void*));
void    ft_lstadd_back(t_list **lst, t_list *news);
void ft_lstdelone(t_list *lst, void (*del)(void *));
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memset(void *b, int c, size_t len);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_calloc(size_t count, size_t size);
void *ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
int ft_isalnum(int str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_isalpha(int str);
int	ft_isdigit(int str);
int ft_isascii(int str);
int	ft_tolower(int str);
int	ft_toupper(int str);
int ft_atoi(const char *str);
int	ft_isprint(int str);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_itoa(int nbr);
char	*ft_strdup(char *src);
char    *ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_strrchr(const char *s, int c);
char    *ft_substr(char const *s, unsigned int start,size_t len);
char *ft_strtrim(char const *s1, char const *set);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char *str, char charset);
size_t ft_strlen(char *str);
size_t	ft_strlcat(char *dest, char *src, size_t size);
t_list *ft_lstnew(void *content);


#endif