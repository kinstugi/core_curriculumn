/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-03 10:15:37 by kwaku             #+#    #+#             */
/*   Updated: 2025-08-03 10:15:37 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fdf.h"

void	draw_rect(t_data *img, int height, int width, int px, int py)
{
	int	w;
	int	h;

	h = -1;
	while (++h < height)
	{
		w = -1;
		while (++w < width)
			ft_place_pixel(img, px + w, py + h, BLUE);
	}
}

int	main(void)
{
	void	*mlx;
	t_data	img;
	void	*m_win;

	mlx = mlx_init();
	m_win = mlx_new_window(mlx, 800, 600, "the booty man TV");
	img.img = mlx_new_image(mlx, 800, 600);
	img.addr = mlx_get_data_addr(img.img, &img.bit_per_pixel, &img.line_length,
			&img.endian);
	draw_rect(&img, 150, 100, 50, 5);
	mlx_put_image_to_window(mlx, m_win, img.img, 0, 0);
	mlx_loop(mlx);
}
