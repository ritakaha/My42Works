/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:32:12 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/21 08:24:40 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main()
{
	int a;
	char *s1 = "HALO";
	char *s2 = "OLHA";

	printf("string 1 = %s\n", s1);
	printf("string 2 = %s\n\n", s2);
	a = ft_strcmp(s1, s2);
	printf("diferença = %d\n", a);
	printf("string 1 = %s\n", s1);
	printf("string 2 = %s\n", s2);
	return (0);
}
