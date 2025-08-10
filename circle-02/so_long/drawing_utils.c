/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-09 18:29:03 by kwaku             #+#    #+#             */
/*   Updated: 2025-08-09 18:29:03 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	my_mlx_pixel_put(t_frame *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

void	draw_rect(t_frame *frame, t_rect *rect)
{
	int	w;
	int	h;

	h = -1;
	while (++h < rect->height)
	{
		w = -1;
		while (++w < rect->width)
		{
			if (rect->has_border && (h == 0 || h == rect->height - 1 || w == 0
					|| w == rect->width - 1))
				my_mlx_pixel_put(frame, rect->px + w, rect->py + h,
					rect->border_color);
			else
				my_mlx_pixel_put(frame, rect->px + w, rect->py + h,
					rect->color);
		}
	}
}
