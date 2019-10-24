/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main09.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:07:27 by msales-a          #+#    #+#             */
/*   Updated: 2019/10/10 18:13:29 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *ft_strcapitalize(char *str);

int main(void)
{
    char text[] = "ol\'a, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
    printf("%s",ft_strcapitalize(text));
    return (0);
}
