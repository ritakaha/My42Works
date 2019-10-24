/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:48:38 by csuehiro          #+#    #+#             */
/*   Updated: 2019/10/21 09:06:45 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(void)
{
	int		size = 5;
	char	sep[] = "--bla--";
	char	*strs[] = {"Hello, world!", "How are you?", "I'm tired", "But I'm happy", "Or not. I don't know =P teste1234"};
	char	*bla;

	bla = ft_strjoin(size, strs, sep);
	printf("%s\n", bla);
	return (0);
}
