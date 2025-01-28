/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:50:36 by egerin            #+#    #+#             */
/*   Updated: 2025/01/28 14:14:00 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap(t_node **stack)
{
	t_node	*c;
	t_node	*a;
	t_node	*b;

	if (*stack = NULL || (*stack)->next == NULL)
		return ;
	a = *stack;
	b = a->next;
	c = b->next;
	a->next = c;
	if (c != NULL)
		c->prev = a;
	b->next = a;
	a->prev = b;
	b->prev = NULL;
	*stack = b;
}

void	sa(t_node **a)
{
	ft_swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	ft_swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}
