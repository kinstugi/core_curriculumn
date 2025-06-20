/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 09:54:45 by baffour           #+#    #+#             */
/*   Updated: 2025/06/01 12:39:09 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    size_t i;
    
    i = 0;
    while(i < n)
    {
        ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
        if (((unsigned char*)src)[i] == (unsigned char)c)
            return ((unsigned char*)dst) + (i+1);
        i++;
    }
    return 0;
}
