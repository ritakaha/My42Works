/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:07:27 by msales-a          #+#    #+#             */
/*   Updated: 2019/10/10 09:34:38 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ft_str_is_numeric(char *str);

int main(void)
{
    /*int character = 0;
    while (character <= 255)
    {
        printf("%03d (%c) -> %d ", character, character, isalpha(character));
        character++;
    }*/
    printf("\nVazio: %d",ft_str_is_numeric(""));
    printf("\nLetras: %d",ft_str_is_numeric("Mateus"));
    printf("\nNumeros: %d",ft_str_is_numeric("455442"));
    printf("\nLetras e Numeros: %d",ft_str_is_numeric("A2"));
    printf("\nOperadores de escape: %d",ft_str_is_numeric("\n\r\t"));
 
    return (0);
}