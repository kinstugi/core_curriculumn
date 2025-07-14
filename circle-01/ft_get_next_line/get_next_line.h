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
# include <stdlib.h>
# include <unistd.h>
# define VEC_CAPACITY 20

typedef struct s_vec
{
	unsigned int	capacity;
	unsigned int	size;
	char			*arr;
}					t_vec;
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char				*get_next_line(int fd);
void				copy_arr(char *src, char *dst, int old_cap);
int					push_char(t_vec *vec, char ch);
#endif