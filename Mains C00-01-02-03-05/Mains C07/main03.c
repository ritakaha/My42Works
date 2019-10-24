/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 08:39:13 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/21 08:47:16 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strjoin(int size, char **strs, char *sep);

int		main(int argc, char **argv)
{
	if (argc == 1)
		return 0;
	char sep[] = "  !";
	printf ("Resultado: %s",ft_strjoin(argc, argv, sep));
}
