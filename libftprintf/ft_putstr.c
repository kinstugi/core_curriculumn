/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:30:05 by baffour           #+#    #+#             */
/*   Updated: 2025/06/16 18:31:56 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(const char ch);

int     ft_putstr(const char *str)
{
    int i;

    i = -1;

    while(str[++i])
        ft_putchar(str[i]);
    return i;
}