/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:15:23 by egerin            #+#    #+#             */
/*   Updated: 2025/02/06 12:44:14 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_sorted(t_node *stack)
{
	if (!stack)
		return (0);
	while (stack->next)
	{
		if (stack->nb > stack->next->nb)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	ft_stack_len(t_node *stack)
{
	int	i;

	i = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

t_node	*ft_find_highest(t_node *stack)
{
	int		i;
	t_node	*highest;

	if (stack == NULL)
		return (NULL);
	i = INT_MIN;
	while (stack)
	{
		if (stack->nb > i)
		{
			i = stack->nb;
			highest = stack;
		}
		stack = stack->next;
	}
	return (highest);
}

void	ft_sort_three(t_node **a)
{
	t_node	*highest;

	highest = ft_find_highest(*a);
	if (*a == highest)
		ra(a);
	else if ((*a)->next == highest)
		rra(a);
	if ((*a)->nb > (*a)->next->nb)
		sa(a);
}

t_node	*ft_find_smaller(t_node *stack)
{
	int		i;
	t_node	*smallest;

	if (stack == NULL)
		return (NULL);
	i = INT_MAX;
	while (stack)
	{
		if (stack->nb < i)
		{
			i = stack->nb;
			smallest = stack;
		}
		stack = stack->next;
	}
	return (smallest);
}
