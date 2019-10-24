/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:10:08 by csuehiro          #+#    #+#             */
/*   Updated: 2019/10/10 16:27:40 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main()
{
	int a;
	char s1[] = "HALO";
	char s2[] = "OLHA";

	printf("s1 = %s\n", s1);
	printf("s2 = %s\n\n", s2);
	//a = strcmp(s1, s2);
	a = ft_strcmp(s1, s2);
	printf("a = %d\n", a);
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	return (0);
}
