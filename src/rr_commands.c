/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_commands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 19:46:00 by bde-carv          #+#    #+#             */
/*   Updated: 2022/07/06 15:21:11 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rra(t_list **stack, int print)
{
	t_list	*first;
	t_list	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = ft_lstlast(*stack);
	while ((*stack)->next != last)
		*stack = (*stack)->next;
	(*stack)->next = NULL;
	*stack = first;
	ft_lstadd_front(stack, last);
	if (print != 0)
		write(1, "rra\n", 4);
}

void	rrb(t_list **stack, int print)
{
	t_list	*first;
	t_list	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = ft_lstlast(*stack);
	while ((*stack)->next != last)
		*stack = (*stack)->next;
	(*stack)->next = NULL;
	*stack = first;
	ft_lstadd_front(stack, last);
	if (print != 0)
		write(1, "rrb\n", 4);
}

void	rrr(t_list	**stack_a, t_list **stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	write(1, "rrr\n", 4);
}
