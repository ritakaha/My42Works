/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 09:15:58 by msouza-d          #+#    #+#             */
/*   Updated: 2019/10/13 09:36:26 by msouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main (int argc, char **argv)
{
	char	**square;
	int		i;
	int		x;
	int		y;
	int		a;

// validações para começar o programa.
	x = 0;
	i = 1;
	if ((argc != 2) || (argv[1][31] != '\0'))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	while (x < 31)
	{
		a = x;
		if ((((a % 2) != 0) && (argv[1][x] != ' ')) ||
			(((a % 2) == 0) && (((argv[1][x] < '1') || (argv[1][x] > '4')))))
		{
			write(1, "Error\n", 6);
			return (1);
		}
		x++;
	}

	// cria as arrays
	i = -1;
	square = malloc(4 * sizeof(char *));
	while (i++ < 3)
		square[i] = malloc(4 * sizeof(char *));

// preenche o tabuleiro com 0
	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			square[x][y] = '0';
			y++;
		}
		x++;
	}

// regra dos 1 ou 4 no começo sem o oposto do outro lado
	i = 0;
	x = 0;
	y = 0;
	while (i < 7)
	{
		if (argv[1][i] == '1')
			square[x][y] = '4';
		if (argv[1][i] == '4')
			square[x][y] = '1';
		y++;
		i += 2;	
	}
	y = 0;
	x = 3;
	while (i < 15)
	{
		if (argv[1][i] == '1')
			square[x][y] = '4';
		if (argv[1][i] == '4')
			square[x][y] = '1';
		y++;
		i += 2;
	}
	x = 0;
	y = 0;
	while (i < 23)
	{
		if(argv[1][i] == '1')
			square[x][y] = '4';
		if(argv[1][i] == '4')
			square[x][y] = '1';
		x++;
		i += 2;
	}
	x = 0;
	y = 3;
	while (i < 31)
	{
		if (argv[1][i] == '1')
			square[x][y] = '4';
		if (argv[1][i] == '4')
			square[x][y] = '1';
		x++;
		i += 2;
	}

// regra do 1 numa ponta e 4 na outra
	i = 0;
	x = 0;
	y = 0;
	while (i < 7)
	{
		if ((argv[1][i] == '4') && (argv[1][i + 8] == '1'))
		{
			square[x + 1][y] = '2';
			square[x + 2][y] = '3';
		}
		y++;
		i += 2;	
	}
	y = 0;
	x = 3;
	while (i < 15)
	{
		if ((argv[1][i] == '4') && (argv[1][i - 8] == '1'))
		{
			square[x - 1][y] = '2';
			square[x - 2][y] = '3';
		}
		y++;
		i += 2;
	}
	x = 0;
	y = 0;
	while (i < 23)
	{
		if ((argv[1][i] == '4') && (argv[1][i + 8] == '1'))
		{
			square[x][y + 1] = '2';
			square[x][y + 2] = '3';
		}
		x++;
		i += 2;
	}
	x = 0;
	y = 3;
	while (i < 31)
	{
		if ((argv[1][i] == '4') && (argv[1][i - 8] == '1'))
		{
			square[x][y - 1] = '2';
			square[x][y - 2] = '3';
		}
		x++;
		i += 2;
	}

// regra do 1 e 2 opostos
	i = 0;
	x = 0;
	y = 0;
	while (i < 7)
	{
		if ((argv[1][i] == '1') && (argv[1][i + 8] == '2'))
			square[x + 3][y] = '3';
		y++;
		i += 2;	
	}
	y = 0;
	x = 3;
	while (i < 15)
	{
		if ((argv[1][i] == '1') && (argv[1][i - 8] == '2'))
			square[x - 3][y] = '3';
		y++;
		i += 2;
	}
	x = 0;
	y = 0;
	while (i < 23)
	{
		if ((argv[1][i] == '1') && (argv[1][i + 8] == '2'))
			square[x][y + 3] = '3';
		x++;
		i += 2;
	}
	x = 0;
	y = 3;
	while (i < 31)
	{
		if ((argv[1][i] == '1') && (argv[1][i - 8] == '2'))
		{
			square[x][y - 3] = '3';
		}
		x++;
		i += 2;
	}

// regra do 2 e 3 opostos
	i = 0;
	x = 0;
	y = 0;
	while (i < 7)
	{
		if ((argv[1][i] == '2') && (argv[1][i + 8] == '3'))
			square[x + 1][y] = '4';
		y++;
		i += 2;	
	}
	y = 0;
	x = 3;
	while (i < 15)
	{
		if ((argv[1][i] == '2') && (argv[1][i - 8] == '3'))
		square[x - 1][y] = '4';
		y++;
		i += 2;
	}
	x = 0;
	y = 0;
	while (i < 23)
	{
		if ((argv[1][i] == '2') && (argv[1][i + 8] == '3'))
			square[x][y + 1] = '4';
		x++;
		i += 2;
	}
	x = 0;
	y = 3;
	while (i < 31)
	{
		if ((argv[1][i] == '2') && (argv[1][i - 8] == '3'))
		{
			square[x][y - 1] = '4';
		}
		x++;
		i += 2;
	}

// escrever o tabuleiro
	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 3)
		{
			write(1, &square[x][y], 1);
			write(1, " ", 1);
			y++;
		}
		write(1, &square[x][y], 1);
		write(1, "\n", 1);
		x++;
	}
	return (0);
}
