/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:48:05 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/11 18:56:45 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	c = 30;
	d = 60;
	a = &c;
	b = &d;

	printf("O valor anterior de a é: %d\n" , *a);
	printf("O valor anterior de b é: %d\n" , *b);

	ft_swap(a, b);

	printf("O valor anterior de a é: %d\n" , *a);
	printf("O valor anterior de b é: %d\n" , *b);
}
