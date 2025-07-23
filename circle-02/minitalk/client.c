/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:51:45 by kwaku             #+#    #+#             */
/*   Updated: 2025/07/23 04:18:12 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	main(int ac, char **av)
{
	int		server_pid;
	char	marker[2];
	char	*pid_str;

	if (ac == 3)
	{
		marker[1] = 0;
		marker[0] = 29;
		server_pid = atoi(av[1]);
		pid_str = ft_itoa(getpid());
		send_message(server_pid, pid_str);
		send_message(server_pid, marker);
		send_message(server_pid, av[2]);
		marker[0] = 4;
		send_message(server_pid, marker);
		free(pid_str);
	}
	return (0);
}
