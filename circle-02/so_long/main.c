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

int	handle_keypress(int keycode, t_game_state *g_state)
{
	if (keycode == 65307)
		mlx_destroy_window(g_state->game->mlx, g_state->game->window);
	else if (keycode == 97)
		printf("move player left\n");
	else if (keycode == 100)
		printf("move player right\n");
	else if (keycode == 119)
		printf("move player up\n");
	else if (keycode == 115)
		printf("move player down\n");
	return (0);
}

int	main(void)
{
	t_game			game;
	t_frame			frame;
	t_game_state	g_state;
	const int		s_width = 800;
	const int		s_height = 600;

	game.mlx = mlx_init();
	game.window = mlx_new_window(game.mlx, s_width, s_height, "so long");
	frame.img = mlx_new_image(game.mlx, s_width, s_height);
	g_state.game = &game;
	mlx_hook(game.window, 2, 1L << 0, handle_keypress, &g_state);
	frame.addr = mlx_get_data_addr(frame.img, &frame.bits_per_pixel,
			&frame.line_length, &frame.endian);
	mlx_put_image_to_window(game.mlx, game.window, frame.img, 0, 0);
	mlx_loop(game.mlx);
}
