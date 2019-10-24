/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:08:40 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/21 17:51:14 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main()
{
	int i = 0;
	int	*test = &i;
	int	**range = &test;
	i = ft_ultimate_range(range, 0, 10);
	printf("Size: %i\n", i);
	int j = -1;
	printf("Sequencia");
	while (++j < i)
		printf(" %i", range[0][j]);

}
