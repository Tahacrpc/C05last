/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcirpici <tcirpici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:48:20 by tcirpici          #+#    #+#             */
/*   Updated: 2024/08/29 12:21:25 by tcirpici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power <= 0)
	{
		return (0);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
