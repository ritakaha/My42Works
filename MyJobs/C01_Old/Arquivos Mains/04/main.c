/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 08:04:24 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/14 08:29:56 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int*b);

int		main(void)
{
	int *a;
	int *b;
	int c;
	int d;
	
	a = &c;
	b = &d;
	c = 20;
	d = 10;

	printf("O valor de a era: %d\n" , *a);
	printf("O endereço de a era: %p\n" , &a);
	printf("O valor de b era: %d\n" , *b);
	printf("O endereço de b era: %p\n" , &b);

	ft_ultimate_div_mod(a, b);

	printf("O valor de a era: %d\n" , *a);
	printf("O endereço de a era: %p\n" , &a);
	printf("O valor de b era: %d\n" , *b);
	printf("O endereço de b era: %p\n" , &b);
}


