/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 08:47:03 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/08 11:08:58 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firstline(int x, int y)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
		ft_putchar('o');
	while (i < (x - 2) && y > 0)
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1 && y > 0)
		ft_putchar('o');
}

void	middleline(int x, int y)
{
	int j;
	int k;

	k = 0;
	if (y > 1)
	{
		while (k < (y - 2))
		{
			ft_putchar('\n');
			ft_putchar('|');
			j = 0;
			while (j < (x - 2))
			{
				ft_putchar(' ');
				j++;
			}
			if (x > 1 && y > 0)
				ft_putchar('|');
			k++;
		}
	}
}

void	endline(int x, int y)
{
	int m;

	m = 0;
	if (x > 0 && y > 1)
	{
		ft_putchar('\n');
		ft_putchar('o');
		while (m < (x - 2) && y > 1)
		{
			ft_putchar('-');
			m++;
		}
		if (x > 1 && y > 1)
			ft_putchar('o');
	}
	if (x > 0 && y > 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		firstline(x, y);
		middleline(x, y);
		endline(x, y);
	}
}
