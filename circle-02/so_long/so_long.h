/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-09 07:54:17 by kwaku             #+#    #+#             */
/*   Updated: 2025-08-09 07:54:17 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "ft_colors.h"
# include <mlx.h>
# include <stdio.h>

typedef struct s_frame
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}			t_frame;

typedef struct s_game
{
	void	*mlx;
	void	*window;
}			t_game;

typedef struct s_rect
{
	int		width;
	int		height;
	int		px;
	int		py;
	int		color;
	int		has_border;
	int		border_color;
}			t_rect;

typedef struct s_game_state
{
	t_game	*game;
	t_rect	*player;
}			t_game_state;
void		my_mlx_pixel_put(t_frame *data, int x, int y, int color);
void		draw_rect(t_frame *frame, t_rect *rect);
#endif