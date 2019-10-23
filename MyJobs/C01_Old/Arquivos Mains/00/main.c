/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:04:08 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/11 18:17:43 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int *nbr;
	int a;

	a = 42;
	nbr = &a;
	ft_ft(nbr);

	printf("O valor de nbr é: %d\n" , *nbr);
	printf("O valor do endereço de nbr é: %p\n" , nbr);
}
