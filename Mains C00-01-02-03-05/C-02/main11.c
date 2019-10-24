/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:14:07 by msales-a          #+#    #+#             */
/*   Updated: 2019/10/10 18:16:18 by msales-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);

int main(void)
{
	ft_putstr_non_printable("Você\n\té\n\t\tum\n\r\ttripulant\ne");
	return (0);
}