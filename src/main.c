/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:49:57 by egerin            #+#    #+#             */
/*   Updated: 2025/03/11 16:03:05 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (1);
	else if (ac == 2)
		av = ft_split(av[1], ' ');
	init_stack(&a, av + 1);
	if (!ft_sorted(a))
	{
		if (ft_stack_len(a) == 2)
			sa(&a);
		else if (ft_stack_len(a) == 3)
			ft_sort_three(&a);
		else
			sort_stacks(&a, &b);
	}
	ft_stackfree(&a);
}
