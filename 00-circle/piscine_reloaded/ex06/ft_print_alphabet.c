/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-06 09:55:20 by kwaku             #+#    #+#             */
/*   Updated: 2025-07-06 09:55:20 by kwaku            ###   ########.fr       */
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

	(void)ac;
	(void)av;
	i = -1;
	while (++i < 26)
		ft_putchar('a' + i);
}
