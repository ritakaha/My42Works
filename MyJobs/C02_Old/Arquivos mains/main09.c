/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 01:18:31 by lsenra-a          #+#    #+#             */
/*   Updated: 2019/10/10 07:39:32 by lsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char input[50];

	printf("Enter string to capitalize (max 45c):\n");
	fgets(input, 50, stdin);
	printf("original: %s\n", input);
	ft_strcapitalize(input);
	printf("Here You Go:\n%s", input);
}
