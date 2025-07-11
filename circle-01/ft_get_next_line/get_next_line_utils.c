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
	char	*newArr;

	old_capacity = vec->capacity;
	vec->capacity *= 2;
	newArr = malloc(sizeof(char) * (vec->capacity));
	if (!newArr)
		return (0);
	copy_arr(vec->arr, newArr, old_capacity);
	free(vec->arr);
	vec->arr = newArr;
	return (1);
}

int	push_char(t_vec *vec, char ch)
{
	if (vec->size < vec->capacity || resize_arr(vec))
	{
		vec->arr[vec->size] = ch;
		vec->size += 1;
	}
	return (vec->size);
}
