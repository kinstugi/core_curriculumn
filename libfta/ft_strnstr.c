/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:11:33 by baffour           #+#    #+#             */
/*   Updated: 2025/06/03 17:00:15 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

int ft_memcmp(const void *s1, const void *s2, size_t n);
size_t ft_strlen(const char *s);

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t needle_len;

    i = 0;
    needle_len = ft_strlen(needle);
    while(haystack[i] && (i + needle_len) <= len)
    {
        if (ft_memcmp(haystack + i, needle, sizeof(char) * needle_len) == 0)
            return (char *)haystack + i;
        i++;
    }
    return 0;
}
