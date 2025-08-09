/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-04 10:52:02 by kwaku             #+#    #+#             */
/*   Updated: 2025-08-04 10:52:02 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	ft_place_pixel(t_frame *img, int x, int y, int color)
{
	char	*dst;

	dst = img->addr + (y * img->line_length + x * (img->bit_per_pixel / 8));
	*(unsigned int *)dst = color;
}

void	draw_rect(t_rect *rectangle, int px, int py, t_frame *frame)
{
	int	w;
	int	h;

	h = -1;
	while (++h < rectangle->height)
	{
		w = -1;
		while (++w < rectangle->width)
		{
			ft_place_pixel(frame, px + rectangle->width, py + rectangle->height, rectangle->color);
		}
	}
}
