/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 22:03:36 by pfu               #+#    #+#             */
/*   Updated: 2018/03/17 22:26:15 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i <= (nb / 2))
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
