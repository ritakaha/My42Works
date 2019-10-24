/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:35:08 by csuehiro          #+#    #+#             */
/*   Updated: 2019/10/14 09:30:27 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char s1[80] = "Hello world!";
	char s2[] = "Esse e somente um teste";
	int i = 6;

	printf("s1 = %s\n", s1);
	printf("s2 = %s\n\n", s2);
	//strncat(s1, s2, i);
	ft_strncat(s1, s2, i);
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);

	return (0);
}
