/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:46:35 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/17 18:09:41 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	size_to_find;
	int	counter;
	int	i;

	size_to_find = ft_strlen(to_find);
	counter = 0;
	i = 0;
	if (size_to_find == 0)
		return (str);
	while (str[counter] != '\0')
	{
		i = 0;
		while (i < size_to_find)
		{
			if (str[counter + i] != to_find[i])
				break ;
			if (i == size_to_find - 1)
				return (str + counter);
			i++;
		}
		counter++;
	}
	return (0);
}
