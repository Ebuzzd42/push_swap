/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:27:12 by egerin            #+#    #+#             */
/*   Updated: 2025/01/28 14:48:11 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rotate(t_node **stack)
{
	t_node	*first;
	t_node	*last;
	t_node	*second;

	if (stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	second = (*stack)->next;
	last = find_last(*stack);
	last->next = first;
	first->prev = last;
	first->next = NULL;
	second->prev = NULL;
	*stack = second;
}

void	ra(t_node **a)
{
	ft_rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_node **b)
{
	ft_rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}
