/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jsp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:10:23 by egerin            #+#    #+#             */
/*   Updated: 2025/03/11 16:09:45 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_five(t_node **a, t_node **b)
{
	while (ft_stack_len(*a) > 3)
	{
		init_nodes(*a, *b);
		finish_rotation(a, ft_find_smallest(*a), 'a');
		pb(b, a);
	}
}

void	rotate_both(t_node **a, t_node **b, t_node *cheapest)
{
	while (*a != cheapest->target_node && *b != cheapest)
		rr(a, b);
	find_current_index(*a);
	find_current_index(*b);
}

void	reverse_rotate_both(t_node **a, t_node **b, t_node *cheapest)
{
	while (*a != cheapest->target_node && *b != cheapest)
		rrr(a, b);
	find_current_index(*a);
	find_current_index(*b);
}

void	finish_rotation(t_node **stack, t_node *top_node, char stack_name)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->above_median)
				ra(stack);
			else
				rra(stack);
		}
		else if (stack_name == 'b')
		{
			if (top_node->above_median)
				rb(stack);
			else
				rrb(stack);
		}
	}
}

void	move_nodes(t_node **a, t_node **b)
{
	t_node	*cheapest;

	cheapest = return_cheapest(*b);
	if (cheapest->above_median && cheapest->target_node->above_median)
		rotate_both(a, b, cheapest);
	else if (!(cheapest->above_median)
		&& !(cheapest->target_node->above_median))
		reverse_rotate_both(a, b, cheapest);
	finish_rotation(b, cheapest, 'b');
	finish_rotation(a, cheapest->target_node, 'a');
	pa(a, b);
}

void	sort_stacks(t_node **a, t_node **b)
{
	t_node	*smallest;
	int		a_len;

	a_len = ft_stack_len(*a);
	if (a_len == 5)
		sort_five(a, b);
	else
	{
		while (a_len-- > 3)
			pb(b, a);
	}
	ft_sort_three(a);
	while (*b)
	{
		init_nodes(*a, *b);
		move_nodes(a, b);
	}
	find_current_index(*a);
	smallest = ft_find_smallest(*a);
	if (smallest->above_median)
		while (*a != smallest)
			ra(a);
	else
		while (*a != smallest)
			rra(a);
}
