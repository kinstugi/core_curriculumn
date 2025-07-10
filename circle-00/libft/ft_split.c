/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 20:18:26 by baffour           #+#    #+#             */
/*   Updated: 2025/06/10 20:03:24 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_arr_len(char const *s, char c)
{
	int	word_count;
	int	i;
	int	flag;

	word_count = 0;
	i = -1;
	flag = 0;
	while (s[++i])
	{
		if (s[i] == c)
		{
			word_count += flag;
			flag = 0;
		}
		else
			flag = 1;
	}
	return (flag + word_count);
}

void	*free_all(int i, char **buffer)
{
	if (buffer[i])
		return ((void *)buffer[i]);
	while (--i > -1)
	{
		if (buffer[i])
		{
			free(buffer[i]);
			buffer[i] = NULL;
		}
	}
	free(buffer);
	return (NULL);
}

char	*get_word(char const *s, char c, int *start)
{
	int		len;
	int		tmp;
	char	*word_buffer;

	len = 0;
	while (s[len + *start] && s[len + *start] != c)
		len++;
	tmp = len;
	word_buffer = malloc(sizeof(char) * (len + 1));
	if (!word_buffer)
		return (NULL);
	word_buffer[len] = 0;
	while (--len >= 0)
		word_buffer[len] = s[len + *start];
	*start += tmp;
	return (word_buffer);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		len;
	char	**res;

	len = get_arr_len(s, c);
	res = malloc(sizeof(char *) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			res[j++] = get_word(s, c, &i);
			if (!free_all(j - 1, res))
				return (NULL);
		}
		else
			i++;
	}
	return (res);
}
