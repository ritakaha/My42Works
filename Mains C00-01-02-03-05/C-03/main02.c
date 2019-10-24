/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:49:55 by csuehiro          #+#    #+#             */
/*   Updated: 2019/10/10 17:33:34 by csuehiro         ###   ########.fr       */
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
	//strcat(s1, s2);
	ft_strcat(s1, s2);
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	return (0);
}
