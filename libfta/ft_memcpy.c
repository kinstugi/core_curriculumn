/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 00:21:06 by baffour           #+#    #+#             */
/*   Updated: 2025/06/01 10:07:21 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return dst;
}
