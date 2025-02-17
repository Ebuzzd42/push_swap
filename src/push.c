/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:18:21 by egerin            #+#    #+#             */
/*   Updated: 2025/01/29 13:05:28 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_push(t_node **src, t_node **dest)
{
	t_node	*tmp;

	if (*src == NULL || (*src)->next == NULL)
		return ;
	tmp = *src;
	*src = (*src)->next;
	(*src)->prev = NULL;
	tmp->prev = NULL;
	if (*dest == NULL)
	{
		*dest = tmp;
		(*dest)->next = NULL;
	}
	else
	{
		tmp->next = *dest;
		tmp->next->prev = tmp;
		*dest = tmp;
	}
}

void	pa(t_node **a, t_node **b)
{
	ft_push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_node **b, t_node **a)
{
	ft_push(a, b);
	write(1, "pb\n", 3);
}
