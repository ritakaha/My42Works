/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 08:35:52 by mapereir          #+#    #+#             */
/*   Updated: 2019/10/23 11:31:22 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);

int		main(void)
{
	int num;
	int x;
	int y;

	num = 0;
	x = 0;
	y = 0;
	printf("Digite o número para encontrar o próximo numero primo: ");
	scanf("%d", &num);
	x = ft_is_prime(num);
	if (x == 0)
		printf("Este número é composto \n");
	else
		printf("Este número é primo \n");
	if (x == 1)
	{
		y = ft_find_next_prime(num);
		printf("O próximo número primo é = %d\n", y);
	}
	return (0);
}
