/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 09:13:50 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/14 11:41:05 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int j;
	int tab[] = { 2, 4, -10, 100, -200, 300, 125, -1, -100, 200};
	int size = 10;

	j = 0;
	while (j < size)
	{
		printf("%d" , tab[j]);
		printf(" ");
		j++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	printf("\n");

	j = 0;
	while (j < size)
	{
		printf("%d" , tab[j]);
		printf(" ");
		j++;
	}
}

