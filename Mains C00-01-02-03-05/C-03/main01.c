/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:31:22 by csuehiro          #+#    #+#             */
/*   Updated: 2019/10/14 09:24:58 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	int a;
	char s1[] = "HAO?";
	char s2[] = "HAOL";
	int n = 2;
	
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	//a = strncmp(s1, s2, n);
	a = ft_strncmp(s1, s2, n);
	printf("a = %d\n", a);
	return (0);
}
