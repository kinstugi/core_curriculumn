/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:45:35 by baffour           #+#    #+#             */
/*   Updated: 2025/06/04 12:49:07 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	l1;
	size_t	l2;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if (l1 < l2)
		l1 = l2;
	if (l1 < n)
		n = l1;
	return (ft_memcmp(s1, s2, n));
}
