/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-20 19:18:01 by kwaku             #+#    #+#             */
/*   Updated: 2025-06-20 19:18:01 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(const char ch);

int     ft_put_pos_ul(unsigned long num)
{
    int res;

    if (num < 10)
    {
        ft_putchar('0' + num);
        return 1;
    }
    res = ft_put_pos_ul(num / 10);
    ft_putchar('0' + (num % 10));
    return res + 1;
}

int     ft_putnbr_uint(unsigned int n)
{
    unsigned long num;
    
    num = (unsigned long) n;
    return ft_put_pos_ul(num);
}
