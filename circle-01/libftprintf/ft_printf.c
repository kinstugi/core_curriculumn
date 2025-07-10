/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:48:46 by baffour           #+#    #+#             */
/*   Updated: 2025/06/16 23:17:35 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

void    ft_putchar(const char ch);
int     ft_putstr(const char *str);
int     ft_putnbr(int num);
int     ft_putnbr_uint(unsigned int n);
int     ft_print_hex(int num, char s_case);

int     handle_str_format(char format, va_list args)
{
    if (format == 0)
        return -1;
    else if (format == 's')
        return ft_putstr(va_arg(args, char *));
    else if (format == 'c')
        ft_putchar(va_arg(args, int));
    else if (format == '%')
        ft_putchar('%');
    else if (format == 'd' || format == 'i')
        return ft_putnbr(va_arg(args, int));
    else if (format == 'u')
        return ft_putnbr_uint(va_arg(args, unsigned int));
    else if (format == 'x')
        return ft_print_hex(va_arg(args, int), 'a');
    else if (format == 'X')
        return ft_print_hex(va_arg(args, int), 'A');
    return 1;
}

int     ft_printf(const char *str, ...)
{
    int i;
    int count;
    int res;
    va_list args;
    va_start(args, str);

    i = -1;
    count = 0;
    while(str[++i])
    {
        if (str[i] != '%')
        {
            ft_putchar(str[i]);
            count++;
        }
        else{
            res = handle_str_format(str[++i], args);
            count += res;
        }
    }
    va_end(args);
    return count;
}
