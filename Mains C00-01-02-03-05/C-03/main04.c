/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:53:26 by csuehiro          #+#    #+#             */
/*   Updated: 2019/10/14 09:33:54 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
	char str[] = "Oi tudo bem?";
	char find[] = "tudo";
	char *ptr;
	
	ptr = str;

	printf("Antes: %p\n", ptr);
	ptr = strstr(str, find);
	//ptr = ft_strstr(str, find);
	printf("Depois %p", ptr);
	return (0);
}
