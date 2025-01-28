/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:48:25 by egerin            #+#    #+#             */
/*   Updated: 2025/01/28 15:11:36 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_reverse_rotate(t_node **stack)
{
	t_node	*first;
	t_node	*second_last;
	t_node	*last;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	last = find_last(*stack);
	second_last = last->prev;
	last->next = first;
	first->prev = last;
	second_last->next = NULL;
	last->prev = NULL;
	*stack = last;
}

void	rra(t_node **a)
{
	ft_reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	ft_reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
