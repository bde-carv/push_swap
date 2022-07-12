/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_commands.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 19:36:38 by bde-carv          #+#    #+#             */
/*   Updated: 2022/07/06 15:18:49 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ra(t_list **stack, int print)
{
	t_list	*tmp;

	tmp = *stack;
	if (!tmp || !tmp->next)
		return ;
	*stack = (*stack)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack, tmp);
	if (print != 0)
		write(1, "ra\n", 3);
}

void	rb(t_list **stack, int print)
{
	t_list	*tmp;

	tmp = *stack;
	if (!tmp || !tmp->next)
		return ;
	*stack = (*stack)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack, tmp);
	if (print != 0)
		write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	write(1, "rr\n", 1);
}
