/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 08:37:39 by baffour           #+#    #+#             */
/*   Updated: 2025/07/23 10:17:07 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# define VECTOR_CAPACITY 10000
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_vector
{
	int			size;
	int			capacity;
	char		*arr;
}				t_vector;

typedef struct s_data_packet
{
	int			done;
	int			sender_pid;
	t_vector	packets[2];
}				t_data_packet;

char			*encode_msg(char *msg);
int				push_back(t_vector *vec, char ch);
void			send_message(int recv, char *msg);
char			*ft_itoa(int n);
int				receive_mssage(char ch);
#endif