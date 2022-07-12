/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:47:57 by bde-carv          #+#    #+#             */
/*   Updated: 2022/07/06 15:03:23 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/* 
* finds the last element based on i(=lstsize)
* j must be 1 because we count elements not index-positions
*/
t_list	*ft_chunk_end(t_list *stack, int i)
{
	t_list	*end;
	int		j;

	j = 1;
	end = stack;
	while (j < i)
	{
		end = end->next;
		j++;
	}
	return (end);
}

/* 
* finds median of all indexes by iterating through, adding them up
  and then deviding by the nr. of elements in the stack (=i)
*/
int	ft_mid_index(t_list *stack, int i)
{
	int	j;
	int	avr;

	j = 0;
	avr = 0;
	while (j < i)
	{
		avr += stack->index;
		stack = stack->next;
		j++;
	}
	avr = avr / i;
	return (avr);
}
