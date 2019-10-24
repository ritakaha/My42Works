/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 08:35:52 by mapereir          #+#    #+#             */
/*   Updated: 2019/10/22 19:26:56 by mapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_find_next_prime(int nb);

int		main(void)
{
	int num;
	int x;

	num = 0;
	printf("numero para verificar se é primo: ");
	scanf("%d", &num);
	x = ft_find_next_prime(num);
	if (x == 1)
		printf("o numero %d é PRIMO\n",num);
	if (x == 0)
		printf("o numero %d não é primo\n", num);
	printf("valor retornado de ft_is_prime = %d\n", x);	
	return (0);
}
