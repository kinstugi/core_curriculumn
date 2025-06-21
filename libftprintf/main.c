/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 21:09:50 by baffour           #+#    #+#             */
/*   Updated: 2025/06/16 23:27:29 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

void    ft_putchar(const char ch);
int     add_nums(int start, ...);
int     ft_printf(const char *str, ...);

int main(void)
{
    int r2 = printf("%x\n", 1125);
    int r1 = ft_printf("%x\n", 1125);

    if (r2 - r1)
        printf("hey they\n");
   
}
