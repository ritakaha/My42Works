/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 08:13:45 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/16 10:14:16 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int     *ft_range(int min, int max);

int		main(int argc, char **argv)
{
	unsigned int	i;

	i = 0;
	if (argc < 3)
	{
		printf("Digite um range separados por espaço");
		return 0;
	}
	int *range = ft_range(atoi(argv[1]), atoi(argv[2]));
	unsigned int elementCount = atoi(argv[2]) - atoi(argv[1]);
	while (i < elementCount)
	{
		printf("%d ", range[i]);
		i++;
	}
}
