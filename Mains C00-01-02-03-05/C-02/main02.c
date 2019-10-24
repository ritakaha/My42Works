/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:07:27 by msales-a          #+#    #+#             */
/*   Updated: 2019/10/10 18:10:04 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ft_str_is_alpha(char *str);

int main(void)
{
    /*int character = 0;
    while (character <= 255)
    {
        printf("%03d (%c) -> %d ", character, character, isalpha(character));
        character++;
    }*/
    printf("\nSó letras resulta em: %d",ft_str_is_alpha("Matus"));
    printf("\nletras e numeros resultam em: %d",ft_str_is_alpha("A+2"));
    printf("\nNumeros e outras coisas resultam em: %d",ft_str_is_alpha("__32#32\t"));
 
    return (0);
}
