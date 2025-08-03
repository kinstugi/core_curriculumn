/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-08-03 18:37:39 by kwaku             #+#    #+#             */
/*   Updated: 2025-08-03 18:37:39 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FDF_H
# define FT_FDF_H
# include "ft_colors.h"
# include <math.h>
# include <mlx.h>

typedef struct s_point
{
	int		x;
	int		y;
}			t_point;

typedef struct s_rect
{
	int		width;
	int		height;
	int		color;
	t_point	*points;
}			t_rect;

typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bit_per_pixel;
	int		line_length;
	int		endian;
}			t_data;
void		rotate_shape(t_point *shape, int cnt, double angle);
#endif
