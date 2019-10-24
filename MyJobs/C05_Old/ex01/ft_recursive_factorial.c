/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:43:48 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/23 08:07:54 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int x;

	x = nb;
	if (x < 0 || x > 12)
		return (0);
	if (x > 1)
		return (x * ft_recursive_factorial(x - 1));
	else
		return (1);
}
