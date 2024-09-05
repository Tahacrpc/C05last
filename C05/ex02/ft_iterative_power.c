/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcirpici <tcirpici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 05:02:51 by tcirpici          #+#    #+#             */
/*   Updated: 2024/08/29 12:16:41 by tcirpici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power == 0 || nb == 1)
	{
		return (1);
	}
	if (power <= 0)
	{
		return (0);
	}
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
