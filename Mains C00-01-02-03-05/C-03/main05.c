/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:41:13 by csuehiro          #+#    #+#             */
/*   Updated: 2019/10/14 08:01:30 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{	
	int size = 0;
	char dst[] = "Beautiful";
	char dst2[] = "Beautiful";
	char src[] = "Hello";
	unsigned long a;
	unsigned long b;

	a = strlcat(dst, src, size);
	b = ft_strlcat(dst2, src, size);
	printf("strlcat = %ld\n", a);
	printf("ft_strlcat = %ld\n", b);
	return (0);
}
