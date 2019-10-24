/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:15:19 by msales-a          #+#    #+#             */
/*   Updated: 2019/10/10 16:09:23 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <string.h>
#include <ctype.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void) {
  
  char a[] = "mate";
  char b[] = "Hoje";
  int k = ft_strlcpy(b,a,4);
  printf("%d : %s", k, b);
  return 0;
}