/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-06 10:28:13 by kwaku             #+#    #+#             */
/*   Updated: 2025-07-06 10:28:13 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		ft_putchar(s[i]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	while (1)
	{
		diff = s1[i] - s2[i];
		if (diff || s1[i] == 0 || s2[i] == 0)
			return (diff);
		i++;
	}
	return (-1);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (++i < ac)
	{
		j = i;
		while (++j < ac)
		{
			if (ft_strcmp(av[i], av[j]) <= 0)
				continue ;
			tmp = av[i];
			av[i] = av[j];
			av[j] = tmp;
		}
	}
	i = 0;
	while (++i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
	}
}
