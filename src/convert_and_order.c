/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_and_order.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:03:17 by bde-carv          #+#    #+#             */
/*   Updated: 2022/07/04 20:37:11 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/*
* iterates through the elements in argv and applies
  convert_to_int_node to each and puts it into stack_a
* first a single node is created, the rest via while loop
* if j == 0 means ft_update_index found a duplicate
* i is the starting index
*/
t_list	*ft_summon_a(char **argv, unsigned int i)
{
	t_list			*stack_a;
	unsigned int	start;
	int				j;

	start = i;
	j = 1;
	stack_a = ft_convert_to_int_node(argv[i]);
	i++;
	while (argv[i] != NULL)
	{
		ft_lstadd_back(&stack_a, ft_convert_to_int_node(argv[i]));
		j = ft_update_index(stack_a);
		if (j == 0)
			break ;
		i++;
	}
	if (start == 0)
		ft_free_str(argv);
	if (!stack_a || j == 0)
	{
		write (2, "hell no bro\n", 13);
		return (NULL);
	}
	return (stack_a);
}

/*
* converts an elemnt from string into int and returns it as a node
*/
t_list	*ft_convert_to_int_node(char *arg)
{
	int		*nbr;
	t_list	*new;

	nbr = ft_calloc(1, sizeof(int));
	if (!nbr)
		return (NULL);
	*nbr = ft_atoi(arg);
	new = ft_lstnew((void *)nbr);
	if (!new)
	{
		free(nbr);
		return (NULL);
	}
	new->index = 0;
	return (new);
}

/*
* checks order and looks for duplicate numbers (first if)
* compares node's values and assigns them indexes needed
  for finding the right order
*/
int	ft_update_index(t_list *stack_a)
{
	t_list	*tmp;
	t_list	*last;
	int		value;

	if (!stack_a)
		return (0);
	tmp = stack_a;
	last = ft_lstlast(tmp);
	value = *(int *)last->content;
	while (tmp != last)
	{
		if (value == *(int *)tmp->content)
		{
			ft_lstclear(&stack_a, free);
			return (0);
		}
		else if (value > *(int *)tmp->content)
			last->index++;
		else if (value < *(int *)tmp->content)
			tmp->index++;
		tmp = tmp->next;
	}
	return (1);
}

/*
* check if the stack is sorted based on their indexes
* returns 1 if sorted, 0 if not
*/
int	ft_check_if_sorted(t_list **stack_a)
{
	t_list	*tmp;

	if (!(*stack_a))
		return (0);
	tmp = *stack_a;
	while (tmp->next != NULL && tmp->index < tmp->next->index)
	{
		tmp = tmp->next;
	}
	if (tmp == ft_lstlast(*stack_a))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
