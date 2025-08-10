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

void	draw_rect(t_game *game, t_frame *frame, t_rect *rect)
{
	int	w;
	int	h;

	(void)game;
	h = -1;
	while (++h < rect->height)
	{
		w = -1;
		while (++w < rect->width)
			my_mlx_pixel_put(frame, w + rect->px, h + rect->py, rect->color);
	}
}
