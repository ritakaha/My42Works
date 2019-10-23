/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:43:48 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/22 16:09:02 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int x;
	int y;

	x = nb;
	if (x == 1)
		return (x);
	else
		y = x * ft_recursive_factorial(x - 1);
	return (y);
}
