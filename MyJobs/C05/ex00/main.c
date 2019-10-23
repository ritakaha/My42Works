/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 09:47:19 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/22 09:58:34 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_interative_factorial(int nb);

int		main(void)
{
	int n;
	int m;

	printf("Digite um número para fatoriar : ");
	scanf("%d", &m);
	n = ft_interative_factorial(m);
	printf("O fatorial é: %d\n", n);
	return (0);
}