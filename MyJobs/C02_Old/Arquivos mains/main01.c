/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:21:54 by lsenra-a          #+#    #+#             */
/*   Updated: 2019/10/10 01:09:21 by lsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char orig[10] ={'a', 'u', 't', 'h', 'o', 'r', 'i', 't', 'y', '\0'};
	char dest[14] ={'c', 'o', 'n', 's', 'c', 'i', 'o', 'u', 's','n','e','s','s','\0'};
	
	printf("src word:\t%s\ndest word:\t%s\n", orig, dest);
	printf("---- POST STRCPY (5) ----\n");
	ft_strncpy(dest, orig, 5);
	printf("src word:\t%s\ndest word:\t%s\n", orig, dest);

	printf("\n");

	printf("src word:\t%s\ndest word:\t%s\n", orig, dest);
	printf("---- POST STRCPY (12) ----\n");
	ft_strncpy(dest, orig, 12);
	printf("src word:\t%s\ndest word:\t%s\n", orig, dest);

	return (0);
}
