/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:20:31 by baffour           #+#    #+#             */
/*   Updated: 2025/06/03 10:13:47 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

size_t ft_strlen(const char *s);

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t d_len;
    size_t s_len;
    size_t i;

    d_len = 0;
    s_len = ft_strlen(src);
    while(dst[d_len] && d_len < dstsize)
        d_len++;
    if (d_len >= dstsize)
        return dstsize + s_len; 
    i = 0;
    while(src[i] && (d_len+i+1) < dstsize)
    {
        dst[d_len+i] = src[i];
        i++;
    }
    dst[d_len+i] = 0;
    return s_len + d_len;
}
