/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-20 20:02:26 by kwaku             #+#    #+#             */
/*   Updated: 2025-06-20 20:02:26 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(const char ch);

char get_out_char(int num, char s_case)
{
    if (num < 10)
        return '0' + num;
    return s_case + (num % 10);
}

int ft_output_hex(long num, char s_case)
{
    int res;

    if (num < 16)
    {
        ft_putchar(get_out_char(num, s_case));
        return 1;
    }
    res = 0;
    ft_output_hex(num / 16, s_case);
    ft_putchar(get_out_char(num % 16, s_case));
    return res + 1;
}

int ft_print_hex(int num, char s_case)
{
    if (num < 0)
    {
        // add logic for two complement + 1
    }
    return ft_output_hex(num, s_case);
}
