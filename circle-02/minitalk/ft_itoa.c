/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-22 21:11:56 by kwaku             #+#    #+#             */
/*   Updated: 2025-07-22 21:11:56 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

long	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

int	get_len(long n)
{
	int	len;

	len = 1;
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	int		neg;
	long	num;

	neg = n < 0;
	len = get_len(ft_abs(n)) + neg;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res[len] = 0;
	if (neg)
		res[0] = '-';
	num = ft_abs(n);
	while (--len >= neg)
	{
		res[len] = (num % 10) + '0';
		num /= 10;
	}
	return (res);
}
