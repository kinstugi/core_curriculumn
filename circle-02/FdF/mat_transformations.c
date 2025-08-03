/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_transformations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-03 18:28:03 by kwaku             #+#    #+#             */
/*   Updated: 2025-08-03 18:28:03 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	rotate_shape(t_point *shape, int cnt, double angle)
{
	int		i;
	double	new_x;
	double	new_y;

	i = -1;
	while (++i < cnt)
	{
		new_x = shape[i].x * cos(angle) - shape[i].y * sin(angle);
		new_y = shape[i].x * sin(angle) + shape[i].y * cos(angle);
		shape[i].x = (int)new_x;
		shape[i].y = (int)new_y;
	}
}
