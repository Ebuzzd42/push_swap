/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:17:56 by egerin            #+#    #+#             */
/*   Updated: 2025/01/22 15:22:46 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_node
{
	int				nb;
	struct s_node	*next;
}					t_node;

void				init_stack(t_node **a, char **av);
long				ft_atol(const char *nptr);
int					repetition(t_node *a, int nbr);
void				new_node(t_node **pile, int nbr);
void				ft_free(t_node **a);
int					ft_char(char *str);
int					ft_isspace(int c);

#endif
