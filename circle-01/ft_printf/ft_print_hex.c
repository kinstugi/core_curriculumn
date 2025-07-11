/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwaku <kwaku@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-20 20:02:26 by kwaku             #+#    #+#             */
/*   Updated: 2025-06-20 20:02:26 by kwaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(const char ch);

char	get_out_char(int num, char s_case)
{
	if (num < 10)
		return ('0' + num);
	return (s_case + (num % 10));
}

int	ft_output_hex(unsigned long num, char s_case)
{
	int	res;

	if (num < 16)
	{
		ft_putchar(get_out_char(num, s_case));
		return (1);
	}
	res = ft_output_hex(num / 16, s_case);
	ft_putchar(get_out_char(num % 16, s_case));
	return (res + 1);
}

int	ft_print_hex(int num, char s_case)
{
	unsigned int	twos_comp;

	if (num < 0)
	{
		twos_comp = 0xffffffff;
		num *= -1;
		twos_comp = (twos_comp ^ num) + 1;
		return (ft_output_hex(twos_comp, s_case));
	}
	return (ft_output_hex(num, s_case));
}
