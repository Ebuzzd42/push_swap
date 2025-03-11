/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:17:03 by egerin            #+#    #+#             */
/*   Updated: 2025/03/11 16:06:35 by egerin           ###   ########.fr       */
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
			b->target_node = ft_find_smallest(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}

void	find_current_index(t_node *stack)
{
	int	i;
	int	median;

	i = 0;
	if (stack == NULL)
		return ;
	median = ft_stack_len(stack) / 2;
	while (stack)
	{
		stack->current_index = i;
		if (i <= median)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		i++;
	}
}

void	find_price(t_node *a, t_node *b)
{
	while (b)
	{
		b->cost = b->current_index;
		if (!(b->above_median))
			b->cost = ft_stack_len(b) - (b->current_index);
		if (b->target_node->above_median)
			b->cost += b->target_node->current_index;
		else
			b->cost += ft_stack_len(a) - (b->target_node->current_index);
		b = b->next;
	}
}

void	find_cheapest(t_node *stack)
{
	long	i;
	t_node	*tmp;

	if (stack == NULL)
		return ;
	i = LONG_MAX;
	while (stack)
	{
		if (stack->cost < i)
		{
			i = stack->cost;
			tmp = stack;
		}
		stack = stack->next;
	}
	tmp->cheapest = true;
}

void	init_nodes(t_node *a, t_node *b)
{
	find_current_index(a);
	find_current_index(b);
	find_target_node(a, b);
	find_price(a, b);
	find_cheapest(b);
}
