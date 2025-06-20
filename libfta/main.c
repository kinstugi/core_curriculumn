/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 23:49:04 by baffour           #+#    #+#             */
/*   Updated: 2025/06/13 17:14:47 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>

void    ft_bzero(void *b, size_t n);
void    *ft_memset(void *b, int c, size_t len);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_atoi(const char *str);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
void    *ft_calloc(size_t count, size_t size);
char    *ft_strdup(const char *s1);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);

int main(int argc, char **argv)
{   
    (void) argc;
    (void) argv;
    for (int i = 0; i <= INT32_MAX; ++i)
    {
        char *res = ft_itoa(i);
        char answer[12];
        ft_memset(answer, 0, 12);
        sprintf(answer, "%d", i);
        if (ft_memcmp(answer, res, 12))
        {
            printf("%s\n", answer);
            break;
        }
        printf("%s %s\n", res, answer);
    }
    return 0;
}
