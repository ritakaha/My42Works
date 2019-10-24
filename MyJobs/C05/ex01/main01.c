/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 08:35:52 by mapereir          #+#    #+#             */
/*   Updated: 2019/10/22 13:10:29 by mapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	int num;
	int x;

	num = 0;
	printf("difite o numero = ");
	scanf("%d", &num);
	x = ft_recursive_factorial(num);
	printf("fatorial de %d  = %d\n", num, x); 
	return (0);
}
