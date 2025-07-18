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

char	*clear_and_return(t_vector **vec, char *buffer, int last_read_count,
		int *cnt)
{
	char	*res;
	int		i;

	res = NULL;
	if (last_read_count == -1)
	{
		*cnt = 0;
		i = -1;
		while (++i < BUFFER_SIZE)
			buffer[i] = 0;
	}
	else if ((*vec)->size > 0)
	{
		i = -1;
		res = malloc(sizeof(char) * ((*vec)->size + 1));
		while (!res)
			res = malloc(sizeof(char) * ((*vec)->size + 1));
		while (++i < (*vec)->size)
			res[i] = (*vec)->arr[i];
		res[i] = 0;
	}
	free((*vec)->arr);
	free((*vec));
	return (res);
}

void	init_vector(t_vector **vec)
{
	*vec = malloc(sizeof(t_vector));
	while (!(*vec))
		*vec = malloc(sizeof(t_vector));
	(*vec)->size = 0;
	(*vec)->capacity = VECTOR_CAPACITY;
	(*vec)->arr = (char *)malloc(sizeof(char) * ((*vec)->capacity));
	while (!(*vec)->arr)
		(*vec)->arr = (char *)malloc(sizeof(char) * ((*vec)->capacity));
}

char	*get_next_line(int fd)
{
	t_vector	*vec;
	static char	buffer[BUFFER_SIZE];
	static int	last_read_count = 0;
	static int	counter = 0;

	init_vector(&vec);
	if (fd < 0)
		return (clear_and_return(&vec, buffer, last_read_count, &counter));
	while (counter && counter < last_read_count)
	{
		if (push_back(vec, buffer[counter++]) == '\n')
			return (clear_and_return(&vec, buffer, last_read_count, &counter));
		counter = (counter) % last_read_count;
	}
	counter = 0;
	last_read_count = read(fd, buffer, BUFFER_SIZE);
	while (last_read_count > 0 && counter < last_read_count)
	{
		if (push_back(vec, buffer[counter++]) == '\n')
			return (clear_and_return(&vec, buffer, last_read_count, &counter));
		counter = (counter) % last_read_count;
		if (!counter)
			last_read_count = read(fd, buffer, BUFFER_SIZE);
	}
	return (clear_and_return(&vec, buffer, last_read_count, &counter));
}
