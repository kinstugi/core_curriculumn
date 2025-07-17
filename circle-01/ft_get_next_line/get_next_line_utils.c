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

int	push_back(t_vector *vec, char ch)
{
	char	*new_arr;
	int		i;
	int		old_cap;

	if (!vec)
		return (0);
	if (vec->size >= vec->capacity)
	{
		old_cap = vec->capacity;
		vec->capacity = old_cap * 2;
		new_arr = malloc(sizeof(char) * (vec->capacity));
		while (!new_arr)
			new_arr = malloc(sizeof(char) * (vec->capacity));
		i = -1;
		while (++i < old_cap)
			new_arr[i] = vec->arr[i];
		free(vec->arr);
		vec->arr = new_arr;
	}
	vec->arr[vec->size] = ch;
	vec->size += 1;
	return ((int)ch);
}
