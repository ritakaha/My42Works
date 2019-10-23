/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:34:20 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/17 18:15:55 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char s1[80] = "Hello world!";
	char s2[] = "Esse eh um teste";

	printf("s1 = %s\n", s1);
	printf("s2 = %s\n\n", s2);
	strcat(s1, s2);
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	return (0);
}
