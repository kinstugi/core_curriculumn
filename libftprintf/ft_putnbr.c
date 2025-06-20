/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 22:13:05 by baffour           #+#    #+#             */
/*   Updated: 2025/06/16 22:45:08 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(const char ch);

int     ft_put_pos(long num)
{
    int res;

    if (num < 10)
    {
        ft_putchar('0' + num);
        return 1;
    }
    res = ft_put_pos(num / 10);
    ft_putchar('0' + (num % 10));
    return res + 1;
}

int     ft_putnbr(int n)
{
    long num;
    
    num = (long) n;
    if (num < 0)
    {
        ft_putchar('-');
        return 1 + ft_put_pos(num * -1);
    }
    return ft_put_pos(num);
}
