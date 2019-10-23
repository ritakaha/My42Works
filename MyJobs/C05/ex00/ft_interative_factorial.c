/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 07:16:34 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/22 16:00:17 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_interative_factorial(int nb)
{
	int i;
	int x;

	x = nb;
	i = 1;
	if (x < 0)
		return (0);
	else if (x == 0)
		x = 1;
	else
	{
		while (i != nb)
		{
			x = x * i;
			i++;
		}
	}
	return (x);
}
