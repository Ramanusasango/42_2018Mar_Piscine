/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 22:55:40 by pfu               #+#    #+#             */
/*   Updated: 2018/04/05 23:14:13 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len);

int		main(void)
{
	int				tab[] = {20, 15, 6333, 479, 2};
	unsigned int	len;

	len = 5;
	printf("max is %d\n",max(tab, len));
	return (0);
}
