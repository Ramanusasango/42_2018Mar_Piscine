/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtashako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 20:00:54 by jtashako          #+#    #+#             */
/*   Updated: 2018/04/01 21:00:37 by jtashako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "rush.h"

int		main(int ac, char **av)
{
	int		a;
	int		b;

	if (ac == 3)
	{
		a = ft_atoi(av[1]);
		b = ft_atoi(av[2]);
		rush(a, b);
	}
	return (0);
}
