/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 08:35:52 by mapereir          #+#    #+#             */
/*   Updated: 2019/10/22 13:38:46 by mapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	int num;
	int pot;
	int x;

	num = 0;
	printf("difite o numero = ");
	scanf("%d", &num);
	printf("digite a portencia = ");
	scanf("%d", &pot);
	x = ft_iterative_power(num, pot);
	printf("potencia de  de %d  = %d\n", num, x); 
	return (0);
}
