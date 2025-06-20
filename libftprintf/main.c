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
    char *s = "the booty man";
    char ch = 'c';
    printf("%X %s %c\n", INT_MAX, s, ch);
    // int r2 = printf("%d %s %c\n", INT_MIN, s, ch);
    // if (r1 - r2)
    //     printf("booty\n");
}
