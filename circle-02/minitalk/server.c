/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:49:50 by kwaku             #+#    #+#             */
/*   Updated: 2025/07/23 11:00:29 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

extern t_data_packet	g_data;

void	handler_usr1(int sig)
{
	(void)sig;
	receive_mssage('0');
}

void	handler_usr2(int sig)
{
	(void)sig;
	receive_mssage('1');
}

void	init_packet(int reset_flag)
{
	int	i;

	g_data.done = 0;
	g_data.sender_pid = -1;
	i = -1;
	while (++i < 2)
	{
		g_data.packets[i].size = 0;
		if (reset_flag == 0)
		{
			g_data.packets[i].capacity = VECTOR_CAPACITY;
			g_data.packets[i].arr = malloc(sizeof(char) * VECTOR_CAPACITY);
		}
	}
}

int	main(void)
{
	int	my_pid;
	int	i;

	init_packet(0);
	my_pid = getpid();
	signal(SIGUSR1, handler_usr1);
	signal(SIGUSR2, handler_usr2);
	printf("%d\n", my_pid);
	while (1)
	{
		while (g_data.done == 0)
			i = 0;
		while (i < g_data.packets[1].size)
		{
			write(1, &(g_data.packets[1].arr[i]), 1);
			i++;
		}
		write(1, "\n", 1);
		init_packet(1);
	}
	free(g_data.packets[0].arr);
	free(g_data.packets[1].arr);
}
