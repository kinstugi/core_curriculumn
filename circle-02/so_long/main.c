/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-09 07:53:37 by kwaku             #+#    #+#             */
/*   Updated: 2025-08-09 07:53:37 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	t_game		game;
	t_frame		frame;
	const int	s_width = 800;
	const int	s_height = 600;

	game.mlx = mlx_init();
	game.window = mlx_new_window(game.mlx, s_width, s_height, "so long");
	frame.img = mlx_new_image(game.mlx, s_width, s_height);
	frame.addr = mlx_get_data_addr(frame.img, &frame.bits_per_pixel, &frame.line_length, &frame.endian);
	mlx_put_image_to_window(game.mlx, game.window, frame.img, 0, 0);
	mlx_loop(game.mlx);
}
