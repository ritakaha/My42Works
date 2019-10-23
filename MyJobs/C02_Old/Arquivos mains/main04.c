/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 01:18:31 by lsenra-a          #+#    #+#             */
/*   Updated: 2019/10/10 04:03:06 by lsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char input[15];

	printf("Enter string to check (max 10c):\n");
	scanf("%s", input); 
	
	if (ft_str_is_lowercase(input))
		printf("Typed string has only lowercase characters :D\n");
	else
		printf("Typed string contains non-lowercase characters >:(\n");

}
