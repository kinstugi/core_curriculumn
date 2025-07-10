/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-07 15:52:14 by kwaku             #+#    #+#             */
/*   Updated: 2025-07-07 15:52:14 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUFF_SIZE 30

void	ft_putstr(char *str);
void	ft_putchar(char ch);

void	write_buffer(char *str, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		ft_putchar(str[i]);
}

void	read_file(char *file_path)
{
	int		fd;
	char	buffer[BUFF_SIZE];
	int		read_count;

	fd = open(file_path, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("Cannot read file.\n");
		return ;
	}
	while (1)
	{
		read_count = read(fd, buffer, BUFF_SIZE);
		write_buffer(buffer, read_count);
		if (read_count != BUFF_SIZE)
			break ;
	}
	close(fd);
}
