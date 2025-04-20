/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:29:32 by egerin            #+#    #+#             */
/*   Updated: 2025/04/20 13:50:22 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long	ft_atol(const char *nptr)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		res = res * 10 + nptr[i++] - 48;
	if (res > INT_MAX || res < INT_MIN)
	{
		write(1, "ERROR\n", 6);
		exit(0);
	}
	return (res * sign);
}

void	init_stack(t_node **a, char **av, int ac)
{
	long	nbr;
	int		i;

	i = 0;
	if (ac)
	{
		while (av[i])
		{
			if (ft_char(av[i]))
				ft_free(a, av, ac);
			nbr = ft_atol(av[i]);
			if (ft_repetition(*a, (int)nbr))
				ft_free(a, av, ac);
			new_node(a, (int)nbr);
			i++;
		}
	}
}

void	new_node(t_node **pile, int nbr)
{
	t_node	*first;
	t_node	*last;

	if (!pile)
		return ;
	first = malloc(sizeof(t_node));
	if (!first)
		return ;
	first->next = NULL;
	first->nb = nbr;
	if (!(*pile))
	{
		*pile = first;
		first->prev = NULL;
	}
	else
	{
		last = find_last_node(*pile);
		last->next = first;
		first->prev = last;
	}
}
