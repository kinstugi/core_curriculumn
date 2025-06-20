/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baffour <baffour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:11:00 by baffour           #+#    #+#             */
/*   Updated: 2025/06/04 14:12:11 by baffour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c);
int ft_isdigit(int c);

int ft_isalnum(int c)
{
    return ft_isalpha(c) || ft_isdigit(c);
}
