/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:35:27 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/21 09:54:03 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char s1[80] = "Hello world!";
	char s2[] = "MatrixReloaded";
	int i = 7;

	printf("s1 = %s\n", s1);
	printf("s2 = %s\n\n", s2);
	ft_strncat(s1, s2, i);
	printf("s1 modificado = %s\n", s1);
	printf("s2 = %s\n", s2);

	return (0);
}
