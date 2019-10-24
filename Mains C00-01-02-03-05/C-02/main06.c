/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:07:27 by msales-a          #+#    #+#             */
/*   Updated: 2019/10/10 10:21:29 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ft_str_is_printable(char *str);

int main(void)
{
    /*int character = 0;
    while (character <= 255)
    {
        printf("%03d (%c) -> %d ", character, character, isalpha(character));
        character++;
    }*/
    printf("\nVazio: %d",ft_str_is_printable(""));
    printf("\nPrintaveis: %d",ft_str_is_printable("15@@_64564dsfdsf56dsf5dsf  -)32"));
    printf("\nNão printaveis: %d",ft_str_is_printable("\r\t\n\b"));
    return (0);
}