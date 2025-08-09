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

int	main(int ac, char **av)
{
	void	*mlx;
	void	*mlx_window;

	(void)ac;
	(void)av;
	mlx = mlx_init();
	mlx_window = mlx_new_window(mlx, 800, 600, "So Long");
	mlx_loop(mlx);
}
