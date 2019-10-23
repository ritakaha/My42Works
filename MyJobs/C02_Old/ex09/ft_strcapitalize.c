/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:30:18 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/17 09:14:34 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int k;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	k = 0;
	while (str[k] != '\0')
	{
		if (((str[k] >= 'A') && (str[k] <= 'Z')) &&
			(((str[k - 1] >= '0') && (str[k - 1] <= '9')) ||
			((str[k - 1] >= 'a') && (str[k - 1] <= 'z')) ||
			((str[k - 1] >= 'A') && (str[k - 1] <= 'Z'))))
		{
			str[k] = str[k] + 32;
		}
		k++;
	}
	return (str);
}
