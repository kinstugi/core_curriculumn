/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 16:17:18 by baffour           #+#    #+#             */
/*   Updated: 2025/06/05 18:14:04 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *s);

char	*copy_from(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	i = 0;
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	buff_size;

	s_len = ft_strlen(s);
	buff_size = len;
	if (start >= s_len)
		return (copy_from(s, s_len, 0));
	if (buff_size > s_len - start)
		buff_size = s_len - start;
	return (copy_from(s, start, buff_size));
}
