/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:07:27 by msales-a          #+#    #+#             */
/*   Updated: 2019/10/10 10:07:38 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
    /*int character = 0;
    while (character <= 255)
    {
        printf("%03d (%c) -> %d ", character, character, isalpha(character));
        character++;
    }*/
    printf("\nVazio: %d",ft_str_is_lowercase(""));
    printf("\nLetras maiúsculas: %d",ft_str_is_lowercase("MATEUS"));
    printf("\nLetras maiúsculas e minúsculas: %d",ft_str_is_lowercase("MateusSalesAlbino"));
    printf("\nLetras minúsculas: %d",ft_str_is_lowercase("mateus"));
 
    return (0);
}