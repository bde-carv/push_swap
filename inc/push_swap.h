/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:14:16 by bde-carv          #+#    #+#             */
/*   Updated: 2022/07/04 18:43:24 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
//commands
void	ra(t_list **stack, int print);
void	rb(t_list **stack, int print);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack, int print);
void	rrb(t_list **stack, int print);
void	rrr(t_list	**stack_a, t_list **stack_b);
void	sa(t_list **stack, int print);
void	sb(t_list **stack, int print);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
// check_input
int		ft_apply_checks(char **argv, int i);
int		ft_is_arg_valid(char *arg);
int		ft_split_and_check_input(char *arg);
void	ft_free_str(char **argv);
long	ft_a_to_long(char *str);
// push_swap.c
void	push_swap_sort(t_list **stack_a);
void	ft_sort_3_args(t_list **stack_a);
void	ft_sort_4_5_args(t_list **stack_a, t_list **stack_b);
//convert_and_order.c
t_list	*ft_summon_a(char **argv, unsigned int i);
t_list	*ft_convert_to_int_node(char *arg);
int		ft_update_index(t_list *stack_a);
int		ft_check_if_sorted(t_list **stack_a);
//quicksort utils.c
t_list	*ft_chunk_end(t_list *stack, int i);
int		ft_mid_index(t_list *stack, int i);
//quick sort.c
void	ft_quick_sort(t_list **stack_a, t_list **stack_b, int i, char c);
void	ft_more_as_2_a(t_list **stack_a, t_list **stack_b, int i);
void	ft_more_as_2_b(t_list **stack_a, t_list **stack_b, int i);
void	ft_1_or_2(t_list **stack_a, t_list **stack_b, int i, char c);
int		ft_push_over(t_list **stack_a, t_list **stack_b, int j, char c);
#endif