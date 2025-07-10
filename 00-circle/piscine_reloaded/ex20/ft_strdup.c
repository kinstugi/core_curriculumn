/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-06 10:57:14 by kwaku             #+#    #+#             */
/*   Updated: 2025-07-06 10:57:14 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (src[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*res;
	int		i;

	len = ft_strlen(src);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	i = -1;
    res[len] = 0;
	while (src[++i])
		res[i] = src[i];
	return (res);
}
