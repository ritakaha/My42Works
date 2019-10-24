/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:27:53 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/23 18:29:42 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int x;
	int y;

	x = 2;
	y = 0;
	if (nb <= 1)
		return (2);
	while (x < nb / x && y == 0)
	{
		if (nb % x == 0)
			y++;
		x++;
	}
	if (y == 0)
		return (nb);
	else
		nb = ft_find_next_prime(++nb);
	return (nb);
}
