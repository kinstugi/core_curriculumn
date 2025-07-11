/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-11 17:44:00 by kwaku             #+#    #+#             */
/*   Updated: 2025-07-11 17:44:00 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	init_variable(t_vec **vec, char **res)
{
	*res = NULL;
	*vec = malloc(sizeof(t_vec));
	while (!(*vec))
		*vec = malloc(sizeof(t_vec));
	(*vec)->size = 0;
	(*vec)->capacity = 20;
	(*vec)->arr = malloc(sizeof(char) * (*vec)->capacity);
	while (!(*vec)->arr)
		(*vec)->arr = malloc(sizeof(char) * (*vec)->capacity);
}

char	*get_next_line(int fd)
{
	t_vec	*vec;
	char	buffer[BUFF_SIZE];
	int		read_count;
	char	*res;

	res = NULL;
	vec = malloc(sizeof(t_vec)); // guard malloc
	while (!vec)
		vec = malloc(sizeof(t_vec));
	vec->capacity = 20;
	vec->size = 0;
	vec->arr = malloc(sizeof(char) * vec->capacity);
	if (!vec->arr)
		return (NULL);
	read_count = read(fd, buffer, BUFF_SIZE);
	while (read_count)
	{
		push_char(vec, buffer[0]); // hand failure when we fail to push
		if (buffer[0] == '\n')
			break ;
		read_count = read(fd, buffer, BUFF_SIZE);
	}
	if (vec->size)
	{
		res = malloc(sizeof(char) * (vec->size + 1));
		while (!res)
			res = malloc(sizeof(char) * (vec->size + 1));
		copy_arr(vec->arr, res, vec->size);
		res[vec->size] = 0;
	}
	free(vec->arr);
	free(vec);
	return (res);
}
