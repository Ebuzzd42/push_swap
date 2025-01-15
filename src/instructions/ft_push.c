/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:02:52 by egerin            #+#    #+#             */
/*   Updated: 2025/01/15 17:24:39 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_push(t_node **src, t_node **dest)
{
	t_node	*tmp;

	if (!src)
		return ;
	*tmp = *dest;
	*dest = *src;
	*src = (*src)->next;
	(*dest)->next = *tmp;
	write (1, "pa/n", 3);
}

t_node	*test(int n)
{
	t_node	*new;

	new = ft_calloc(1, sizeof(t_node));
	if (!new)
		return NULL;
	new->nb = n;
	new->next = NULL;
	return new;
}

// void    swp_lstiter(t_node *a, t_node *b)
// {

//     ft_putendl_fd("-------------------------", 1);
//     while (a)
//     {
//         ft_printf("*\t%d\t*", a->nb);
//         if (b)
//         {
//             ft_putnbr_fd(b->nb, 1);
//             b = b->next;
//         }
//         else
//             ft_putchar_fd(' ', 1);
//         ft_putstr_fd("\t*\n", 1);
//         a = a->next;
//     }
//     while (b && !a)
//     {
//         ft_printf("*\t  ->  \t%d\t*\n", b->nb);
//         b = b->next;
//     }
//     ft_putendl_fd("-------------------------", 1);
// }

int	main(void)
{

}
