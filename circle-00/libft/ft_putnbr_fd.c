/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:26:50 by baffour           #+#    #+#             */
/*   Updated: 2025/06/13 14:07:22 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
long	ft_abs(int n);

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	res[12];
	int		i;

	num = ft_abs(n);
	ft_memset(res, 0, 12);
	res[0] = '0';
	i = 0;
	while (num)
	{
		res[i++] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		res[i] = '-';
	while (i >= 0)
	{
		if (res[i])
			ft_putchar_fd(res[i], fd);
		i--;
	}
}
