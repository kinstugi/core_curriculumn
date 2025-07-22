/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-18 19:51:45 by kwaku             #+#    #+#             */
/*   Updated: 2025-07-18 19:51:45 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	main(int ac, char **av)
{
	int		server_pid;
	int		pid;
	char	*msg;
	int		i;

	if (ac == 3)
	{
		pid = getpid();
		server_pid = atoi(av[1]);
		msg = encode_msg(av[2]);
		printf("PID %d\n", pid);
		i = -1;
		while (msg[++i])
		{
			if (msg[i] == '0')
				kill(server_pid, SIGUSR1);
			else
				kill(server_pid, SIGUSR2);
			usleep(10);
		}
		free(msg);
	}
	return (0);
}
