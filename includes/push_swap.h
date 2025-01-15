/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:17:56 by egerin            #+#    #+#             */
/*   Updated: 2025/01/15 16:19:16 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "../libft/libft.h"
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

typedef struct s_node
{
	int		nb;
	struct s_node *next;
}	t_node;



t_node	*test(int n);
#endif
