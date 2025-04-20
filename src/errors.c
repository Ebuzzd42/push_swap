/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:24:22 by egerin            #+#    #+#             */
/*   Updated: 2025/04/20 13:49:56 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_repetition(t_node *a, int nbr)
{
	if (a == NULL)
		return (0);
	while (a)
	{
		if (a->nb == nbr)
			return (1);
		a = a->next;
	}
	return (0);
}

int	ft_char(char *str)
{
	if (!(*str == '+' || *str == '-' || (*str >= '0' && *str <= '9')))
		return (1);
	if ((*str == '+' || *str == '-') && !(str[1] >= '0' && str[1] <= '9'))
		return (1);
	while (*++str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (1);
	}
	return (0);
}

void	ft_stackfree(t_node **a)
{
	t_node	*tmp;
	t_node	*tmp2;

	tmp2 = *a;
	while (tmp2)
	{
		tmp = tmp2->next;
		free(tmp2);
		tmp2 = tmp;
	}
	a = NULL;
}

void	ft_free(t_node **a, char **av, int ac)
{
	ft_stackfree(a);
	if (ac == 2)
		free_split(av);
	write(1, "error\n", 6);
	exit(1);
}

void	free_matrix(char **av)
{
	int	i;

	i = -1;
	if (NULL == av || NULL == *av)
		return ;
	while (av[i])
		free(av[i++]);
	free(av - 1);
}
