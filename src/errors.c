/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuzeyd <ebuzeyd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:34:57 by egerin            #+#    #+#             */
/*   Updated: 2025/01/23 14:34:59 by ebuzeyd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free(t_node **a)
{
	ft_stackfree(a);
	write (1, "error\n", 6);
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
	if (!(*str == '+'
			|| *str == '-'
			|| (*str >= '0' && *str <= '9'))) //Check if the first character of the input string does not contain a sign or a digit
		return (1);
	if ((*str == '+'
			|| *str == '-')
		&& !(str[1] >= '0' && str[1] <= '9')) //Check if the first character of the input string contains a sign, but the second character does not contain a digit
		return (1);
	while (*++str) //If the error conditions above are passed, pre-increment to point to the next character in the string, and loop until the end of the string is reached
	{
		if (!(*str >= '0' && *str <= '9')) //Check if the next character in the string is not a digit
			return (1);
	}
	return (0);
}

int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}
