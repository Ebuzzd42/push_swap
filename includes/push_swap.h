/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:20:29 by egerin            #+#    #+#             */
/*   Updated: 2025/04/20 13:49:13 by egerin           ###   ########.fr       */
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
	int				current_position;
	int				push_price;
	bool			above_median;
	bool			cheapest;
	struct s_node	*target_node;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

//// ALGO ////
void				tiny_sort(t_node **a);
void				handle_five(t_node **a, t_node **b);
void				set_current_position(t_node *stack);
void				set_target_node(t_node *a, t_node *b);
void				set_price(t_node *a, t_node *b);
void				set_cheapest(t_node *b);
void				init_nodes(t_node *a, t_node *b);
void				move_nodes(t_node **a, t_node **b);
void				push_swap(t_node **a, t_node **b);

//// ERRORS ////
void				free_matrix(char **av);
void				ft_free(t_node **a, char **av, int ac);
void				ft_stackfree(t_node **a);
int					ft_char(char *str);
int					ft_repetition(t_node *a, int nbr);
void				free_split(char **av);

//// COMMANDS ////
void				rotate_both(t_node **a, t_node **b, t_node *cheapest_node);
void				reverse_rotate_both(t_node **a, t_node **b,
						t_node *cheapest_node);
void				finish_rotation(t_node **stack, t_node *top_node,
						char stack_name);
void				ft_push(t_node **dest, t_node **src);
void				pa(t_node **a, t_node **b);
void				pb(t_node **b, t_node **a);
void				ft_rotate(t_node **stack);
void				ra(t_node **a);
void				rb(t_node **b);
void				rr(t_node **a, t_node **b);
void				ft_reverse_rotate(t_node **stack);
void				rra(t_node **a);
void				rrb(t_node **b);
void				rrr(t_node **a, t_node **b);
void				ft_swap(t_node **head);
void				sa(t_node **a);
void				sb(t_node **b);
void				ss(t_node **a, t_node **b);

//// UTILS ////
long				ft_atol(const char *nptr);
void				init_stack(t_node **a, char **av, int ac);
void				new_node(t_node **pile, int nbr);
t_node				*find_last_node(t_node *head);
t_node				*find_smallest(t_node *stack);
t_node				*return_cheapest(t_node *stack);
int					stack_len(t_node *stack);
bool				ft_sorted(t_node *stack);
t_node				*find_highest(t_node *stack);

#endif
