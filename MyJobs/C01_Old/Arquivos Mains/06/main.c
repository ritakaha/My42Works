/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 08:53:16 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/14 09:10:49 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int 	main(void)
{
	char *str;
	int n;

	str = "Teste de contagem de texto";
	n = ft_strlen(str);
	printf("A contagem foi de: %d\n" , n);
}
