/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-06 10:11:09 by kwaku             #+#    #+#             */
/*   Updated: 2025-07-06 10:11:09 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	k;

	i = 0;
	while (++i < ac)
	{
		k = -1;
		while (av[i][++k])
			ft_putchar(av[i][k]);
		ft_putchar('\n');
	}
	return (0);
}
