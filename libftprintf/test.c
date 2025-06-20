/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:20:27 by baffour           #+#    #+#             */
/*   Updated: 2025/06/16 16:28:39 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this is where i do my tests
#include <stdarg.h>

int add_nums(int start, ...)
{
    va_list nums;
    va_start(nums, start);
    int total = start;
    int curr;
    
    do
    {
        curr = va_arg(nums, int);
        total += curr;
    } while (curr != 0);
    va_end(nums);
    return total;
}
