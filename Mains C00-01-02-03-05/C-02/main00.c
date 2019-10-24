/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:15:19 by msales-a          #+#    #+#             */
/*   Updated: 2019/10/09 18:35:45 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src);

int main(void)
{
    char dest[] = "Mateus";
    char src[] = "Sales Albino";

    printf("Copiar uma string para outra\nAntes: \n");
    printf("src:    \"%s\" com %lu caracteres e endereço %p\n", src, strlen(src), src);
    printf("dest:   \"%s\" com %lu caracteres e endereço %p\n", dest, strlen(dest), &dest); 
    
    char *res = ft_strcpy(dest, src);       
    
    printf("\nDepois:\n");
    printf("src:    \"%s\" com %lu caracteres e endereço %p\n", src, strlen(src), src);
    printf("dest:   \"%s\" com %lu caracteres e endereço %p\n", dest, strlen(dest), dest);
    printf("result: \"%s\" com %lu caracteres e endereço %p\n", res, strlen(res), res);

    return (0);
}