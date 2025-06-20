/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 00:18:16 by baffour           #+#    #+#             */
/*   Updated: 2025/06/09 18:49:23 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t ft_strlen(const char *s);
void *ft_memset(void *b, int c, size_t len);

int get_interval_len(char const *s1, char const *set, int *start)
{
    int mp[128];
    int i;

    ft_memset(mp, 0, sizeof(int) * 128);
    i = -1;
    while(set[++i])
        mp[(int) set[i]]++;
    i = (int)ft_strlen(s1) - 1;
    if (i < 0)
        return 1;
    while(i > -1 && mp[(int) s1[i]])
        --i;
    *start = 0;
    while(s1[*start] && mp[(int) s1[*start]])
        *start += 1;
    if (*start > i)
        return 1;
    return i - *start + 2;
}

char *ft_strtrim(char const *s1, char const *set)
{
    int len;
    int start;
    char *res;
    int i;

    i = -1;
    len = get_interval_len(s1, set, &start);
    res = malloc(sizeof(char) * len);
    if (!res)
        return 0;
    while(++i < len-1)
        res[i] = s1[start + i];
    res[i] = 0;
    return res;
}
