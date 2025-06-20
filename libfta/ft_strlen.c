/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 23:34:35 by baffour           #+#    #+#             */
/*   Updated: 2025/06/05 17:56:55 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

size_t ft_strlen(const char *s)
{
    size_t len;

    if (!s)
        return 0;
    len = 0;
    while(s[len])
        len++;
    return len;
}
