/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:37:03 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/21 10:04:02 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strstr(char *s1, char *to_find);

int		main(void)
{
	char	*str1 = "Estudando na 42SP";
	char	*str2 = "4";
	char	*str3;
	str3 = ft_strstr(str1, str2);

	printf("Original = %s\n", strstr(str1, str2));
	printf("Minha Ft = %s\n", str3);
}
