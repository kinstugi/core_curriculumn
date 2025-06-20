/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 16:17:18 by baffour           #+#    #+#             */
/*   Updated: 2025/06/05 18:14:04 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
typedef unsigned long size_t;
size_t ft_strlen(const char *s);

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    if (!s)
        return 0;
    size_t s_len = ft_strlen(s);
    size_t i = 0;
    char *sub = malloc(sizeof(char) * (len + 1));
    if (!sub)
        return 0;
    while(i < len && (start + i) < s_len)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = 0;
    return sub;
}
