/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 07:39:28 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/14 07:51:50 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod (int a, int b, int *div, int *mod);

int		main(void)
{
	int a = 16;
	int b = 8;
	int *div;
	int *mod;

	div = &a;
	mod = &b;
	printf("O valor de div era: %d\n" , *div);
	printf("O endereço de div era: %p\n" , &div);
	printf("O valor de mod era: %d\n" , *mod);
	printf("O endereço de mod era: %p\n" , &mod);

	ft_div_mod(a, b, div, mod);

	printf("O valor de div e: %d\n" , *div);
	printf("O endereço de div e: %p\n" , &div);
	printf("O valor de mod e: %d\n" , *mod);
	printf("O endereço de mod e: %p\n" , &mod);






}
