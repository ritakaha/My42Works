/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 09:37:16 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/23 11:31:19 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (nb % i != 0)
	{
		if (i > nb)
			break ;
		i++;
	}
	if (i == nb)
		return (1);
	return (0);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	while (i != 1)
	{
		nb++;
		i = ft_is_prime(nb);
	}
	return (nb);
}
