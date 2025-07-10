/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:17:25 by baffour           #+#    #+#             */
/*   Updated: 2025/06/04 13:34:35 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || (9 <= c && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	neg_cnt;
	int	p;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	neg_cnt = 0;
	p = i;
	while (str[i] == '+' || str[i] == '-')
		neg_cnt += str[i++] == '-';
	if (i - p > 1)
		return (0);
	res = 0;
	while ('0' <= str[i] && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	if (neg_cnt % 2)
		res *= -1;
	return (res);
}
