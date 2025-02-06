/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:17:56 by egerin            #+#    #+#             */
/*   Updated: 2025/02/06 13:42:36 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				nb;
	struct s_node	target_node;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

/////////utils/////////
void				init_stack(t_node **a, char **av);
long				ft_atol(const char *nptr);
int					ft_repetition(t_node *a, int nbr);
void				new_node(t_node **pile, int nbr);
void				ft_free(t_node **a);
int					ft_char(char *str);
int					ft_isspace(int c);
void				ft_stackfree(t_node **a);
t_node				*find_last(t_node *stack);
int					ft_sorted(t_node *stack);
int					ft_stack_len(t_node *stack);
t_node				*ft_find_highest(t_node *stack);
t_node				*ft_find_smaller(t_node *stack);

/////////commands/////////
void				ft_reverse_rotate(t_node **stack);
void				rra(t_node **a);
void				rrb(t_node **b);
void				rrr(t_node **a, t_node **b);
void				ft_rotate(t_node **stack);
void				ra(t_node **a);
void				rb(t_node **b);
void				rr(t_node **a, t_node **b);
void				ft_swap(t_node **stack);
void				sa(t_node **a);
void				sb(t_node **b);
void				ss(t_node **a, t_node **b);
void				ft_push(t_node **src, t_node **dest);
void				pa(t_node **a, t_node **b);
void				pb(t_node **b, t_node **a);

/////////algo/////////
void				ft_sort_three(t_node **a);

#endif
