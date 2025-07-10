/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 09:44:22 by baffour           #+#    #+#             */
/*   Updated: 2025/06/13 16:40:49 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long	ft_abs(int n);

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
