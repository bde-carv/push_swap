/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 15:34:39 by bde-carv          #+#    #+#             */
/*   Updated: 2022/07/10 19:55:03 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/*
* 
* i is nr of elements/nodes to be sorted;
* less than 2 elements can be sorted like this;
* more than 3 elements need to be splitted into chunks via ft_more_as_2;
* if c = 'a' then push to stack_b; if c = 'b' then push to stack_a;
*/
void	ft_quick_sort(t_list **stack_a, t_list **stack_b, int i, char c)
{
	if (i == 1 || i == 2)
		ft_1_or_2(stack_a, stack_b, i, c);
	else
	{
		if (c == 'a')
			ft_more_as_2_a(stack_a, stack_b, i);
		else
			ft_more_as_2_b(stack_a, stack_b, i);
	}
}

/*
* i is nr of elements to be sorted;
* pushes all elements with index < mid_index into stack_b (ft_push_over);
* then recursively calls itself via ft_quick_sort until less than 3 elements left;
* also calls more_as_2_b for what is now in stack_b;
* until j is too small (returned by ft_push_over) or last node is reached;
* (i-j) is the nr of elements we pushed into stack_b;
*/
void	ft_more_as_2_a(t_list **stack_a, t_list **stack_b, int i)
{
	t_list	*end;
	int		rotations;
	int		mid_index;
	int		j;

	j = i;
	mid_index  = ft_mid_index(*stack_a, i);
	end = ft_chunk_end(*stack_a, i);
	rotations = 0;
	while (j > (i / 2) && (*stack_a) != end)
	{
		if ((*stack_a)->index <= mid_index)
			j = ft_push_over(stack_a, stack_b, j, 'a');
		else
		{
			ra(stack_a, 1);
			rotations++;
		}
	}
	if ((*stack_a)->index <= mid_index)
		j = ft_push_over(stack_a, stack_b, j, 'a');
	while (rotations-- > 0)
		rra(stack_a, 1);
	ft_quick_sort(stack_a, stack_b, j, 'a');
	ft_quick_sort(stack_a, stack_b, (i -j), 'b');
}

/*
* i is nr of elements to be sorted;
* pushes all elements with index < mid_index into stack_a (ft_push_over);
* then recursively calls itself via ft_quick_sort until less than 3 elements left;
* also calls more_as_2_a for what is now in stack_b;
* until j is too small (returned by ft_push_over) or last node is reached;
* (i-j) is the nr of elements we pushed into stack_a;
*/
void	ft_more_as_2_b(t_list **stack_a, t_list **stack_b, int i)
{
	t_list	*end;
	int		rotations;
	int		mid_index;
	int		j;

	j = i;
	mid_index  = ft_mid_index(*stack_b, i);
	end = ft_chunk_end(*stack_b, i);
	rotations = 0;
	while (j > (i / 2) && (*stack_b) != end)
	{
		if ((*stack_b)->index > mid_index)
			j = ft_push_over(stack_a, stack_b, j, 'b');
		else
		{
			rb(stack_b, 1);
			rotations++;
		}
	}
	if ((*stack_b)->index > mid_index)
		j = ft_push_over(stack_a, stack_b, j, 'b');
	while (rotations-- > 0)
		rrb(stack_b, 1);
	ft_quick_sort(stack_a, stack_b, (i-j), 'a');
	ft_quick_sort(stack_a, stack_b, j, 'b');
}

/*
* once only 1 or 2 elements left they are sorted here;
* also pushes them into stack_a if they are currently in stack_b;
* i is nr. of elements to be sorted;
* if c = 'b' the n push to stack_a;  if c = 'a' we can sort just here; 
*/
void	ft_1_or_2(t_list **stack_a, t_list **stack_b, int i, char c)
{
	if (i == 1)
	{
		if (c == 'b')
			pa(stack_a, stack_b);
		else
			return ;
	}
	else
	{
		if (c == 'b')
		{
			if ((*stack_b)->index < (*stack_b)->next->index)
				sb(stack_b, 1);
			pa(stack_a, stack_b);
			pa(stack_a, stack_b);
		}
		else
		{
			if ((*stack_a)->index > (*stack_a)->next->index)
				sa(stack_a, 1);
			return ;
		}
	}
}

	/*
	* i is nr of elements currently left in the stack:
	* if c = 'a' we push to b; if c = 'b' we push to stack_a;
	* pushes the elements into the respective stack based on the command pb/pa;
	* j - 1 because one element less in the stack now;
	*/
	int	ft_push_over(t_list **stack_a, t_list **stack_b, int j, char c)
	{
		if (c == 'a')
			pb(stack_a, stack_b);
		else
			pa(stack_a, stack_b);
		return (j-1);
	}
	