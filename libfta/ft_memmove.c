/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 12:56:17 by baffour           #+#    #+#             */
/*   Updated: 2025/06/01 21:36:14 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    
    i = 0;
    if (src <= dst && dst <= src+len)
    {
        while(i < len)
        {
            ((unsigned char*) dst)[len-i-1] = ((unsigned char*)src)[len-i-1];
            i++;
        }
    }
    else
    {
        while(i < len)
        {
            ((unsigned char*) dst)[i] = ((unsigned char*)src)[i];
            i++;
        }
    }
    return dst;
}
