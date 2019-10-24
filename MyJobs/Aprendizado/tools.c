/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirabet <mmirabet@student.42sp.o...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 07:15:32 by mmirabet          #+#    #+#             */
/*   Updated: 2019/10/24 07:23:34 by mmirabet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	int digit;

	digit = (nb % 10);
	if (digit < 0)
		digit = digit * -1;
	if (nb > -10 && nb < 10)
	{
		if (nb < 0)
			write (1, "-", 1);
	}
	else
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(digit + '0');
}
