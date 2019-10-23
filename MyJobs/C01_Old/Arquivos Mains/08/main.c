/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:47:26 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/14 18:46:40 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int tab[] = {5, 20, -60, 100, 0, -2, 66, -200, 500, 75};
	int size = 10;
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		printf("%d" , tab[i]);
		printf(" ");
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, size);
	printf("\n");

	j = 0;
	while (j < size)
	{
		printf("%d" , tab[j]);
		printf(" ");
		j++;
	}
}
