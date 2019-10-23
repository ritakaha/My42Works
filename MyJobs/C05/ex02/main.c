/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:17:33 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/22 20:55:34 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int     main(void)
{
	int a;
	int b;
	int c;
	printf("Digite o valor da base : ");
	scanf("%d", &a);
	printf("Digite o valor do expoente : ");
	scanf("%d", &b);
	c = ft_iterative_power(a,b);
	printf("O resultado é : %d\n", c);
	return (0);
}
