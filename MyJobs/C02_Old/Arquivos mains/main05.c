/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 01:18:31 by lsenra-a          #+#    #+#             */
/*   Updated: 2019/10/17 11:51:45 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char input[20];

	printf("Enter string to check (max 20c):\n");
	scanf("%s", input);
	
	if (ft_str_is_uppercase(input))
		printf("Typed string has only uppercase characters :D\n");
	else
		printf("Typed string contains non-uppercase characters >:(\n");

}
