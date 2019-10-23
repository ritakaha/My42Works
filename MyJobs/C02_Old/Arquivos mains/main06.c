/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsenra-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:05:16 by lsenra-a          #+#    #+#             */
/*   Updated: 2019/10/10 12:27:18 by lsenra-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char a[10] = { 7, 33 , 'a', 'b', 'c', 127, 'f', '\0'};
	char b[5] = {'d', 'f', 'o', 'l', 'd'};
	
	if (ft_str_is_printable(a))
		printf("Wrong; a has unprintable characters:\t%s\n",a);
	else
		printf("Correct; a has unprintable characters:\t%s\n",a);

	if (ft_str_is_printable(b))
		printf("Correct; b is printable:\t\t%s\n",b);
	else
		printf("Wrong; b should be printable.\t\t%s\n",b);
}
