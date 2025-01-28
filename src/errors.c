/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:34:57 by egerin            #+#    #+#             */
/*   Updated: 2025/01/28 17:33:22 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free(t_node **a)
{
	ft_stackfree(a);
	write(1, "error\n", 6);
	exit(1);
}

void	ft_stackfree(t_node **a)
{
	t_node	*tmp;
	t_node	*tmp2;

	tmp2 = *a;
	while (tmp2)
	{
		tmp = tmp2->next;
		tmp2->nb = 0;
		free(tmp2);
		tmp2 = tmp;
	}
	a = NULL;
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
