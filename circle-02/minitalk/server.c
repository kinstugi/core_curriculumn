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

extern t_vector	packets[2];
extern int		done;

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

void	init_packet(void)
{
	int	i;

	i = -1;
	while (++i < 2)
	{
		packets[i].size = 0;
		packets[i].capacity = VECTOR_CAPACITY;
		packets[i].arr = malloc(sizeof(char) * VECTOR_CAPACITY);
	}
}

int	main(void)
{
	int	my_pid;
	int	i;

	init_packet();
	my_pid = getpid();
	signal(SIGUSR1, handler_usr1);
	signal(SIGUSR2, handler_usr2);
	printf("PID %d\n", my_pid);
	printf("Server is running ......\n");
	while (done == 0)
		i = -1;
	while (packets[1].arr[++i])
		write(1, &(packets[1].arr[i]), 1);
	write(1, "\n", 1);
	free(packets[0].arr);
	free(packets[1].arr);
}
