/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 07:42:02 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/16 07:53:03 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int		main(int argc, char **argv)
{
	char *str1;
	char *str2;

	if (argc < 2)
	{
		printf("Escreva uma string");
		return (0);
	}
	str1 = ft_strdup(argv[1]);
	str2 = strdup(argv[1]);
	printf("Minha FT = %s\n", str1);
	printf("Original = %s", str2);
}
