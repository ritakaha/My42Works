/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:20:14 by csuehiro          #+#    #+#             */
/*   Updated: 2019/10/21 09:05:41 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *range;
	int min;
	int max;
	int size;
	int i;

	min = -10;
	max = 2147483645;
	size = ft_ultimate_range(&range, min, max);
	printf("size = %d, endereço = %p\n", size, range);
	i = 0;
	/*while (i < size)
	{
		printf("%d, ", range[i]);
		i++;
	}*/
	return (0);
}
