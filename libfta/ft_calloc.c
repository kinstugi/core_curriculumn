/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:59:27 by baffour           #+#    #+#             */
/*   Updated: 2025/06/13 16:19:29 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef unsigned long size_t;

void *ft_memset(void *b, int c, size_t len);

void *ft_calloc(size_t count, size_t size)
{
    void *ptr = malloc(size * count);
    if (!ptr)
        return 0;
    ft_memset(ptr, 0, count * size);
    return ptr;
}
