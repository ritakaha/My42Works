/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:39:02 by csuehiro          #+#    #+#             */
/*   Updated: 2019/10/21 08:58:44 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int *bla;
	int a;
	int b;
	int i;

	a = -10;
	b = 20;
	bla = ft_range(a, b);
	i = 0;
	printf("endereço = %p\n", bla);
	while (i < b - a)
	{
		printf("%d = %d\n", i, bla[i]);
		i++;
	}
	free(bla);
	return (0);
}
