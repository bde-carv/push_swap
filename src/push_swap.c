/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:53:42 by bde-carv          #+#    #+#             */
/*   Updated: 2022/07/06 15:01:47 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/*
* argv[1] because at argv[0] is the executable;
* checks if only one nr. was put in (is_arg_valid checks for spaces)
  and if valid it means no spaces, so just one nr. that doesnt need sorting
* replace argv with the split elements
* 2nd if: if more than one string is put in;
* start = 0 so that the string can be freed in convert_and_order L40;
*/
int	main(int argc, char **argv)
{
	t_list	*stack_a;
	int		start;

	start = 1;
	if (argc == 2 || argc == 1)
	{
		if (argc == 1 || (argc == 2 && ft_is_arg_valid(argv[1]) == 1))
			return (0);
		else if (argc == 2 && ft_split_and_check_input(argv[1]) == 1)
		{
			argv = ft_split(argv[1], ' ');
			start = 0;
		}
		else
			return (0);
	}
	if (argc > 2 && ft_apply_checks(argv, 1) == 0)
		return (0);
	stack_a = ft_summon_a(argv, start);
	if (!stack_a)
		return (0);
	push_swap_sort(&stack_a);
	ft_lstclear(&stack_a, free);
	return (0);
}

/*
* based on the nr. of elements a stack has, it is given to the right sorting algo
* stack_b  is created by letting it point to a pointer to an empty node
*/
void	push_swap_sort(t_list **stack_a)
{
	t_list	**stack_b;
	t_list	*empty;

	empty = NULL;
	stack_b = &empty;
	if (ft_check_if_sorted(stack_a) == 1)
		return ;
	if (ft_lstsize(*stack_a) == 2)
	{
		sa(stack_a, 1);
		return ;
	}
	else if (ft_lstsize(*stack_a) == 3)
	{
		ft_sort_3_args(stack_a);
		return ;
	}
	else if (ft_lstsize(*stack_a) > 3 && ft_lstsize(*stack_a) < 6)
	{
		ft_sort_4_5_args(stack_a, stack_b);
		return ;
	}
	ft_quick_sort(stack_a, stack_b, ft_lstsize(*stack_a), 'a');
}

/* 
* sorting algo for 3 elements in the stack
*/
void	ft_sort_3_args(t_list **stack_a)
{
	if ((*stack_a)->index < (*stack_a)->next->index)
	{
		rra(stack_a, 1);
		if (ft_check_if_sorted(stack_a) != 1)
			sa(stack_a, 1);
	}
	else
	{
		sa(stack_a, 1);
		if (ft_check_if_sorted(stack_a) != 1)
			rra(stack_a, 1);
		if (ft_check_if_sorted(stack_a) != 1)
			sa(stack_a, 1);
	}
}

/*
* sorting algo for 4 or 5 elements
*/
void	ft_sort_4_5_args(t_list **stack_a, t_list **stack_b)
{
	t_list	*last;

	while (ft_lstsize(*stack_a) > 3)
	{
		last = ft_lstlast(*stack_a);
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
			pb(stack_a, stack_b);
		else if (last->index == 0 || last->index == 1)
		{
			rra(stack_a, 1);
			pb(stack_a, stack_b);
		}
		ra(stack_a, 1);
	}
	if (ft_check_if_sorted(stack_a) != 1)
		ft_sort_3_args(stack_a);
	if ((*stack_b)->next && (*stack_b)->index < (*stack_b)->next->index)
		sb(stack_b, 1);
	while (*stack_b)
		pa(stack_a, stack_b);
	if (ft_check_if_sorted(stack_a) == 0)
		sa(stack_a, 1);
}
