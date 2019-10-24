/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 08:35:52 by mapereir          #+#    #+#             */
/*   Updated: 2019/10/22 15:33:31 by mapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_fibonacci(int index);

int		main(void)
{
	int num;
	int x;

	num = 0;
	printf("digite o indice fibonacci = ");
	scanf("%d", &num);
	x = ft_fibonacci(num);
	printf("numero referente ao indice = %d\n", x); 
	return (0);
}
