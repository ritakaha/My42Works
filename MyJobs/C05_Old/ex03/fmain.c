/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:57:37 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/23 07:40:56 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int	main(void)
{
	int a;
	int b;
	int x;

	printf("Digite um número para base: ");
	scanf("%i" , &a);
	printf("Digite um número para expoente : ");
	scanf("%i", &b);
	x = ft_recursive_power(a, b);
	printf("O valor é : %i\n" , x);
	return(0);
}
