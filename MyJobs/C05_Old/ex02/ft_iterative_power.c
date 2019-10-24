/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:17:54 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/22 20:54:27 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int k;
	int m;

	i = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (i = 1);
	else
	{
		k = 2;
		m = nb;
		while (k <= power)
		{
			m = m * i;
			k++;
		}
		return (m);
	}
}
