/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:18:17 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/11 18:42:22 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int 	main(void)
{
	int *********nbr;
	int ********nbr1;
	int *******nbr2;
	int ******nbr3;
	int *****nbr4;
	int ****nbr5;
	int ***nbr6;
	int **nbr7;
	int *nbr8;	
	int a;

	a = 66;
	nbr8 = &a;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1;

	printf("Endereço anterior de nbr: %p\n" , nbr);
	printf("Valor anterior de *nbr: %d\n" , *********nbr);

	ft_ultimate_ft(nbr);

	printf("Endereço posterior de nbr: %p\n" , nbr);
	printf("Valor posterior de *nbr: %d\n" , *********nbr);
}
