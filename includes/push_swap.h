/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:17:56 by egerin            #+#    #+#             */
/*   Updated: 2025/03/11 16:07:52 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				nb;
	int				current_index;
	int				cost;
	bool			above_median;
	bool			cheapest;
	struct s_node	*target_node;
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
void				ft_stackfree(t_node **a);
t_node				*find_last(t_node *stack);
int					ft_sorted(t_node *stack);
int					ft_stack_len(t_node *stack);
t_node				*ft_find_highest(t_node *stack);
t_node				*ft_find_smallest(t_node *stack);
t_node				*return_cheapest(t_node *stack);

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
void				sort_five(t_node **a, t_node **b);
void				find_target_node(t_node *a, t_node *b);
void				find_current_index(t_node *stack);
void				find_price(t_node *a, t_node *b);
void				find_cheapest(t_node *stack);
void				init_nodes(t_node *a, t_node *b);
void				rotate_both(t_node **a, t_node **b, t_node *cheapest);
void				reverse_rotate_both(t_node **a, t_node **b,
						t_node *cheapest);
void				finish_rotation(t_node **stack, t_node *top_node,
						char stack_name);
void				move_nodes(t_node **a, t_node **b);
void				sort_stacks(t_node **a, t_node **b);

#endif
