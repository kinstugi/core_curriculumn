/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:20:31 by baffour           #+#    #+#             */
/*   Updated: 2025/06/01 23:14:17 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
    {
        if (((unsigned char*)s)[i] == (unsigned char)c)
            return (unsigned char*)s+i;
        i++;
    }
    return 0;
}
