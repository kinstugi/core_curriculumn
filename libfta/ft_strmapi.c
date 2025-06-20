/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 22:09:19 by baffour           #+#    #+#             */
/*   Updated: 2025/06/13 04:28:37 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t ft_strlen(const char *s);

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len;
    char *res;

    len = (int)ft_strlen(s);
    res = malloc(sizeof(char) * (len + 1));
    if (!res)
        return 0;
    res[len] = 0;
    while(--len >= 0)
        res[len] = f((unsigned int)len, s[len]);
    return res;
}
