/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:43:40 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/22 12:43:44 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_recursive_factorial(int nb);

int     main(void)
{
    int x;
    int y;

    printf("Digite um número para fatorar : ");
    scanf("%i" , &x);
    y = ft_recursive_factorial(x);
    printf("O valor é : %i\n" , y);
    return (0);
}