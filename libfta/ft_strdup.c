/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 15:51:42 by baffour           #+#    #+#             */
/*   Updated: 2025/06/05 15:58:14 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
typedef unsigned long size_t;

size_t ft_strlen(const char *s);

char *ft_strdup(const char *s1)
{
    size_t len = ft_strlen(s1);
    size_t i = 0;

    char *str = malloc(sizeof(char) * (len + 1));
    if (!str)
        return 0;
    while(i < len)
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = 0;
    return str;
}
