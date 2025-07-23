/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:49:50 by kwaku             #+#    #+#             */
/*   Updated: 2025/07/23 03:57:48 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_vector	packet;

void	handler_usr1(int sig)
{
	(void)sig;
	push_back(&packet, '0');
}

void	handler_usr2(int sig)
{
	(void)sig;
	push_back(&packet, '1');
}

int	main(void)
{
	int	my_pid;
	int	i;

	packet.size = 0;
	packet.capacity = VECTOR_CAPACITY;
	packet.arr = malloc(sizeof(char) * packet.capacity);
	my_pid = getpid();
	signal(SIGUSR1, handler_usr1);
	signal(SIGUSR2, handler_usr2);
	printf("PID %d\n", my_pid);
	printf("Server is running ......\n");
	while (1)
	{
		if (packet.size == (8 * 18))
		{
			i = -1;
			while (++i < (8 * 18))
				write(1, &(packet.arr[i]), 1);
			write(1, "\n", 1);
			break ;
		}
	}
	free(packet.arr);
}
