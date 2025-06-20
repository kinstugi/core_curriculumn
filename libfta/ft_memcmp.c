/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 22:48:39 by baffour           #+#    #+#             */
/*   Updated: 2025/06/01 22:55:01 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int diff;
    size_t i;

    i = 0;
    while(i < n)
    {
        diff = ((unsigned char*)s1)[i] - ((unsigned char*)s2)[i];
        if (diff)
            return diff;
        i++;
    }
    return 0;
}
