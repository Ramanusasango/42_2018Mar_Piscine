/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 23:12:02 by pfu               #+#    #+#             */
/*   Updated: 2018/03/30 23:15:34 by pfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item);

int			main()
{
	int		i;
	void	*item;

	i = 10;
	item = i;
	btree_create_node(item);
	return (0);
}
