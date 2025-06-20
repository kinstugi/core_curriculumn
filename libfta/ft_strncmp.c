/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:45:35 by baffour           #+#    #+#             */
/*   Updated: 2025/06/04 12:49:07 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

int ft_memcmp(const void *s1, const void *s2, size_t n);

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    return ft_memcmp(s1, s2, n);
}
