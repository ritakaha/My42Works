/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:15:19 by msales-a          #+#    #+#             */
/*   Updated: 2019/10/10 09:08:21 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char dest[] = "Mateus Sales Albino";
    char src[] = "matt";

    printf("Copiar uma string para outra\nAntes: \n");
    printf("src:  %s : %lu : %p\n", src, sizeof(src), src);
    printf("dest: %s : %lu : %p\n", dest, sizeof(dest), dest);
    
    char *res = ft_strncpy(dest, src, 10);    
    //char *res = strncpy(dest, src, 3);    

    printf("\nDepois:\n");
    printf("src:    %s : %lu : %p\n", src, sizeof(src), src);
    printf("dest:   %s : %lu : %p\n", dest, sizeof(dest), dest);
    printf("result: %s : %lu : %p\n", res, sizeof(res), res);
    return (0);
}