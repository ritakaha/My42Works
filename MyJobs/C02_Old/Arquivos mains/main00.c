/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:21:54 by lsenra-a          #+#    #+#             */
/*   Updated: 2019/10/17 11:44:24 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char orig[10] ={'a', 'u', 't', 'h', 'o', 'r', 'i', 't', 'y', '\0'};
	char dest[14] ={'c', 'o', 'n', 's', 'c', 'i', 'o', 'u', 's','n','e','s','s','\0'};
	
	printf("src word:\t%s\ndest word:\t%s", orig, dest);
	printf("\n---- POST STRCPY ----\n");
	ft_strcpy(dest, orig);
	printf("src word:\t%s\ndest word:\t%s", orig, dest);;

	return (0);
}
