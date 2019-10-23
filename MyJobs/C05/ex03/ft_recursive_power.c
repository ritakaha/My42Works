/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:57:52 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/22 21:02:06 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int x;
	unsigned int y;

	x = nb;
	if (power < 0)
		return (0);
	if (power > 0)
	{
		y = nb * ft_recursive_power(nb, power - 1);
		return (y);
	}
	else
		return (1);
}
