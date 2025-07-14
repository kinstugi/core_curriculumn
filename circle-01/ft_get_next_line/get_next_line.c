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
	(*vec)->capacity = VEC_CAPACITY;
	(*vec)->arr = malloc(sizeof(char) * (*vec)->capacity);
	while (!(*vec)->arr)
		(*vec)->arr = malloc(sizeof(char) * (*vec)->capacity);
}

void	finalize_and_cleanup(t_vec **vec, char **res)
{
	if ((*vec)->size)
	{
		*res = malloc(sizeof(char) * ((*vec)->size + 1));
		while (!(*res))
			*res = malloc(sizeof(char) * ((*vec)->size + 1));
		copy_arr((*vec)->arr, *res, (*vec)->size);
		(*res)[(*vec)->size] = 0;
	}
	free((*vec)->arr);
	free(*vec);
}

int	add_and_get_ans(t_vec **vec, char **res, char *buffer, int *counter)
{
	push_char(*vec, buffer[*counter]);
	if (buffer[*counter] == '\n')
	{
		*counter = (*counter + 1) % BUFFER_SIZE;
		finalize_and_cleanup(vec, res);
		return (1);
	}
	return (0);
}

char	*get_next_line(int fd)
{
	char		*res;
	static char	buffer[BUFFER_SIZE];
	static int	counter = 0;
	t_vec		*vec;
	static int	read_count;

	if (fd < 0)
		return (NULL);
	init_variable(&vec, &res);
	while (counter && counter < read_count)
	{
		if (add_and_get_ans(&vec, &res, buffer, &counter))
			return (res);
		counter = (counter + 1) % BUFFER_SIZE;
	}
	read_count = read(fd, buffer, BUFFER_SIZE);
	while (counter < read_count)
	{
		if (add_and_get_ans(&vec, &res, buffer, &counter))
			return (res);
		counter = (counter + 1) % BUFFER_SIZE;
		if (!counter)
			read_count = read(fd, buffer, BUFFER_SIZE);
	}
	finalize_and_cleanup(&vec, &res);
	counter = 0;
	return (res);
}
