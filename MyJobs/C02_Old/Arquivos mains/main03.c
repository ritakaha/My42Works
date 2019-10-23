/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 01:18:31 by lsenra-a          #+#    #+#             */
/*   Updated: 2019/10/10 03:15:11 by lsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char input[15];

	printf("Enter string to check (max 10c):\n");
	scanf("%s", input); 
	
	if (ft_str_is_numeric(input))
		printf("Typed string is numeric :D\n");
	else
		printf("Typed string contains non-numeric characters :C\n");

}
