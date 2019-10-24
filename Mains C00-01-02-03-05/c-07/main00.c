/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:45:44 by csuehiro          #+#    #+#             */
/*   Updated: 2019/10/21 08:56:15 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char src[] = "Teste123!? bla";
	char *src_strdup;
	char *src_ft_strdup;

	printf("Valor src = %s\n", src);
	printf("End src = %p\n\n", src);
	src_strdup = strdup(src);
	src_ft_strdup = ft_strdup(src);
	printf("Valor src strdup original= %s\n", src_strdup);
	printf("End src strdup original= %p\n\n", src_strdup);
	printf("Valor src ft_strdup = %s\n", src_ft_strdup);
	printf("End src ft_strdup = %p\n\n", src_ft_strdup);
	free(src_ft_strdup);
	return (0);
}
