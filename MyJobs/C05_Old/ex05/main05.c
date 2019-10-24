/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 08:35:52 by mapereir          #+#    #+#             */
/*   Updated: 2019/10/22 15:37:44 by mapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_sqrt(int nb);

int		main(void)
{
	int num;
	int x;

	num = 0;
	printf("digite numero para extrair a raiz = ");
	scanf("%d", &num);
	x = ft_sqrt(num);
	printf("raiz de %d = %d\n", num, x); 
	return (0);
}
