/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 08:47:03 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/06 16:30:09 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firstline(int x, int y)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
		ft_putchar('A');
	while (i < (x - 2) && y > 0)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1 && y > 0)
		ft_putchar('A');
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
			ft_putchar('B');
			j = 0;
			while (j < (x - 2))
			{
				ft_putchar(' ');
				j++;
			}
			if (x > 1 && y > 0)
				ft_putchar('B');
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
		ft_putchar('C');
		while (m < (x - 2) && y > 1)
		{
			ft_putchar('B');
			m++;
		}
		if (x > 1 && y > 1)
			ft_putchar('C');
	}
	if (x > 0 && y > 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	firstline(x, y);
	middleline(x, y);
	endline(x, y);
}
