/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:49:04 by egerin            #+#    #+#             */
/*   Updated: 2025/01/15 17:03:08 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	parsing(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		while (av[i])
			printf("%s ", av[i++]);
		i = 0;
	}
	while (ac > 2)
	{
		ft_isdigit(ft_atoi(av[i]));
		i++;
	}
	if (ac < 2)
		write(1, "error", 5);
}

int	main(int ac, char **av)
{
	parsing(ac, av);
	return (0);
}
