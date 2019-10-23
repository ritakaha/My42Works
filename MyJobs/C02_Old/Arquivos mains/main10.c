/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 08:12:58 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/17 12:40:50 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[] = "1234567890";
	char dest[] = "asd";
	unsigned int n;

	n =	ft_strlcpy(dest, src, 6);
	printf("A string dest é: %s\n", dest);
	printf("O tamanho da src é: %i\n", n); 
}
