/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 23:40:09 by baffour           #+#    #+#             */
/*   Updated: 2025/06/01 10:14:58 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *b, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = b;
	while (i < n)
		str[i++] = (unsigned char)0;
}
