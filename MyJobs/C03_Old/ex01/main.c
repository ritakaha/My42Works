/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:33:17 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/21 09:34:41 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	int a;
	char *s1 = "HAO?";
	char *s2 = "HAOL";
	int n = 4;
	
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	a = ft_strncmp(s1, s2, n);
	printf("a = %d\n", a);
	return (0);
}
