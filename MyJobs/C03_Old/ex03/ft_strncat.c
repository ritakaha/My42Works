/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritakaha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:45:47 by ritakaha          #+#    #+#             */
/*   Updated: 2019/10/17 17:46:00 by ritakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				d;
	unsigned int	i;

	d = 0;
	while (dest[d] != '\0')
		d++;
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (dest);
}
