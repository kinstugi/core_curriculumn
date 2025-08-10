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

int	close_game(int keycode, t_game *game)
{
	if (keycode == 65307)
	{
		mlx_destroy_window(game->mlx, game->window);
		return 1;
	}
	return (0);
}

int	main(void)
{
	t_game		game;
	t_frame		frame;
	t_rect		wall;
	const int	s_width = 800;
	const int	s_height = 600;

	// definition for one rectangle
	wall.color = CYAN;
	wall.height = 50;
	wall.width = 50;
	wall.px = 5;
	wall.py = 5;
	// end definition for one rectangle
	game.mlx = mlx_init();
	game.window = mlx_new_window(game.mlx, s_width, s_height, "so long");
	frame.img = mlx_new_image(game.mlx, s_width, s_height);
	mlx_hook(game.window, 2, 1L << 0, close_game, &game);
	frame.addr = mlx_get_data_addr(frame.img, &frame.bits_per_pixel,
			&frame.line_length, &frame.endian);
	draw_rect(&game, &frame, &wall);
	mlx_put_image_to_window(game.mlx, game.window, frame.img, 0, 0);
	mlx_loop(game.mlx);
}
