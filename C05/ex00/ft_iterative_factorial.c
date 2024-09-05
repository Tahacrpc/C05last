/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcirpici <tcirpici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 04:53:53 by tcirpici          #+#    #+#             */
/*   Updated: 2024/08/29 11:56:06 by tcirpici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (0 < nb)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
