/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-11 16:34:24 by kwaku             #+#    #+#             */
/*   Updated: 2025-07-11 16:34:24 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define VECTOR_CAPACITY 10000
# include <stdlib.h>
# include <unistd.h>

typedef struct s_vector
{
	int		size;
	int		capacity;
	char	*arr;
}			t_vector;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20
# endif

char		*get_next_line(int fd);
int			push_back(t_vector *vec, char ch);
#endif