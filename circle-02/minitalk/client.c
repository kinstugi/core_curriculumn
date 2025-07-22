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
	char	*msg;
	char	marker[2];
	char	*pid_str;

	if (ac == 3)
	{
		marker[1] = 0;
		marker[0] = 29;
		pid_str = ft_itoa(getpid());
		server_pid = atoi(av[1]);
		msg = encode_msg(av[2]);
		printf("PID %s\n", pid_str);
		send_message(server_pid, pid_str);
		send_message(server_pid, marker);
		send_message(server_pid, msg);
		marker[0] = 4;
		send_message(server_pid, marker);
		free(msg);
		free(pid_str);
	}
	return (0);
}
