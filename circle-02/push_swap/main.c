/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-29 19:59:56 by kwaku             #+#    #+#             */
/*   Updated: 2025-07-29 19:59:56 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_valid_num(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			return (0);
	}
	return (1);
}

int	*validate_input(int size, char **arr)
{
	int	*res;
	int	i;

	i = -1;
	res = (int *)malloc(sizeof(int) * size);
	if (!res)
		return (0);
	while (++i < size)
	{
		if (!is_valid_num(arr[i + 1]))
		{
			free(res);
			return (0);
		}
		res[i] = atoi(arr[i + 1]);
	}
	return (res);
}

int	main(int ac, char **av)
{
}
