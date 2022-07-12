/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_p_commands.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:25:09 by bde-carv          #+#    #+#             */
/*   Updated: 2022/07/06 15:23:48 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sa(t_list **stack, int print)
{
	t_list	*tmp;

	tmp = *stack;
	if (!tmp || !tmp->next)
		return ;
	*stack = (*stack)->next;
	tmp->next = tmp->next->next;
	(*stack)->next = tmp;
	if (print != 0)
		write(1, "sa\n", 3);
}

void	sb(t_list **stack, int print)
{
	t_list	*tmp;

	tmp = *stack;
	if (!tmp || !tmp->next)
		return ;
	*stack = (*stack)->next;
	tmp->next = tmp->next->next;
	(*stack)->next = tmp;
	if (print != 0)
		write(1, "sb\n", 3);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	write(1, "ss\n", 3);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = *stack_b;
	if (!tmp)
		return ;
	*stack_b = (*stack_b)->next;
	tmp->next = NULL;
	if (!(*stack_a))
		*stack_a = tmp;
	else
		ft_lstadd_front(stack_a, tmp);
	write(1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = *stack_a;
	if (!tmp)
		return ;
	*stack_a = (*stack_a)->next;
	tmp->next = NULL;
	if (!(*stack_b))
		*stack_b = tmp;
	else
		ft_lstadd_front(stack_b, tmp);
	write(1, "pb\n", 3);
}
