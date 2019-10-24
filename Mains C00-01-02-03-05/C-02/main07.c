/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:07:27 by msales-a          #+#    #+#             */
/*   Updated: 2019/10/10 10:40:58 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *ft_strupcase(char *str);

int main(void)
{
    char text[] = "Mateus Sales Albino";

    printf("%s",ft_strupcase(text));
    return (0);
}