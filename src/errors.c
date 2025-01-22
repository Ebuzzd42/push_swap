/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:34:57 by egerin            #+#    #+#             */
/*   Updated: 2025/01/22 15:29:23 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free(t_node **a)
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
	write(1, "error\n", 6);
}

int	ft_char(char *str)
{
	int	i;
	int	compteur;

	i = 0;
	compteur = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && str[i] != ft_isspace(str[i]) && str[i] != '+'
			&& str[i] != '-')
			return (0);
		if (ft_isdigit(str[i]))
			compteur++;
		i++;
	}
	if (!compteur)
		return (0);
	return (1);
}

int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}
