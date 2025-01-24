/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuzeyd <ebuzeyd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:17:56 by egerin            #+#    #+#             */
/*   Updated: 2025/01/23 14:47:43 by ebuzeyd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_node
{
	int				nb;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

void				init_stack(t_node **a, char **av);
long				ft_atol(const char *nptr);
int					ft_repetition(t_node *a, int nbr);
void				new_node(t_node **pile, int nbr);
void				ft_free(t_node **a);
int					ft_char(char *str);
int					ft_isspace(int c);
void				ft_stackfree(t_node **a);
t_node				*find_last(t_node *stack);

#endif
