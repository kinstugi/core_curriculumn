/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-11 16:34:42 by kwaku             #+#    #+#             */
/*   Updated: 2025-07-11 16:34:42 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	copy_arr(char *src, char *dst, int old_cap)
{
	int	i;

	i = -1;
	while (++i < old_cap)
		dst[i] = src[i];
}

int	resize_arr(t_vec *vec)
{
	int		old_capacity;
	char	*new_arr;

	old_capacity = vec->capacity;
	vec->capacity *= 2;
	new_arr = malloc(sizeof(char) * (vec->capacity));
	if (!new_arr)
		return (0);
	copy_arr(vec->arr, new_arr, old_capacity);
	free(vec->arr);
	vec->arr = new_arr;
	return (1);
}

int	push_char(t_vec *vec, char ch)
{
	if (vec->size < vec->capacity || resize_arr(vec))
	{
		vec->arr[vec->size] = ch;
		vec->size += 1;
		return (1);
	}
	return (0);
}
