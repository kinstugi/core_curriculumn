/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-06 14:29:39 by kwaku             #+#    #+#             */
/*   Updated: 2025-07-06 14:29:39 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	res = malloc(sizeof(int) * (max - min));
	if (!res)
		return (0);
	i = 0;
	while (min < max)
		res[i++] = min++;
	return (res);
}
