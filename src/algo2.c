/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:17:03 by egerin            #+#    #+#             */
/*   Updated: 2025/02/06 13:56:40 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	find_target_node(t_node *a, t_node *b)
{
	t_node	*tmp;
	t_node	*target_node;
	int		i;

	while (b)
	{
		i = INT_MAX;
		tmp = a;
		while (tmp)
		{
			if (tmp->nb > b->nb && tmp->nb < i)
			{
				i = tmp->nb;
				target_node = tmp;
			}
			tmp = tmp->next;
		}
		if (i == INT_MAX)
			b->target_node = find_smallest(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}
