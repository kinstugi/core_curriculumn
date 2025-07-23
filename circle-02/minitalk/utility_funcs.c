/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility_funcs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:06:41 by kwaku             #+#    #+#             */
/*   Updated: 2025/07/23 00:10:07 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

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

unsigned int	ft_strlen(char *msg)
{
	unsigned int	len;

	len = 0;
	while (msg[len])
		len++;
	return (len);
}

char	*encode_msg(char *msg)
{
	int		len;
	char	*res;
	int		i;
	int		j;

	len = (int)ft_strlen(msg);
	res = malloc(sizeof(char) * (8 * len + 1));
	i = -1;
	while (++i < len)
	{
		j = 8;
		while (--j > -1)
		{
			if (msg[i] & (1 << j))
				res[i * 8 + (7 - j)] = '0' + 1;
			else
				res[i * 8 + (7 - j)] = '0';
		}
	}
	res[i * 8] = 0;
	return (res);
}

char	*decode_msg(char *msg)
{
	(void)msg;
	return (0);
}

void	send_message(int recv, char *msg)
{
	char	*data;
	int		i;

	data = encode_msg(msg);
	i = -1;
	while (data[++i])
	{
		if (data[i] == '0')
			kill(recv, SIGUSR1);
		else
			kill(recv, SIGUSR2);
		usleep(10);
	}
	free(data);
}
