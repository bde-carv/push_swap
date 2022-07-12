/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:37:18 by bde-carv          #+#    #+#             */
/*   Updated: 2022/07/04 20:40:22 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/*
* iterates through array and applies is_arg_valid to every argument
* return 1 if all is valid
* int i is the starting index
*/
int	ft_apply_checks(char **argv, int i)
{
	while (argv[i])
	{
		if (ft_is_arg_valid(argv[i++]) != 1)
		{
			write (2, "wrong input, you suck!\n", 24);
			return (0);
		}
	}
	return (1);
}

/*
* checks if argument(input string) is valid or not
* return 1 if valid, 0 if invalid
*/
int	ft_is_arg_valid(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		if ((arg[i] < '0' || arg[i] > '9') && arg[i] != '-')
			return (0);
		i++;
	}
	if (i > 11)
		return (0);
	if (i == 11)
	{
		if (arg[0] == '-')
		{
			if (ft_a_to_long(arg) < INT_MIN)
				return (0);
		}
		else
			return (0);
	}
	if (i == 10)
		if (ft_a_to_long(arg) > INT_MAX)
			return (0);
	return (1);
}

/*
* splits the input-string into elements putting them into tmp
* then checks if every element is valid by applying apply_check_args
  to the array of arguments
* returns 1 if all elements valid, or 0 if at least one is invalid
*/

int	ft_split_and_check_input(char *arg)
{
	char	**tmp;
	int		check;

	tmp = ft_split(arg, ' ');
	check = ft_apply_checks(tmp, 0);
	ft_free_str(tmp);
	if (check == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/*
* frees the array of elements
*/
void	ft_free_str(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		free(argv[i++]);
	}
	free(argv);
}

/*
* convert input-string to long
*/
long	ft_a_to_long(char *str)
{
	long	res;
	int		sign;
	int		i;

	res = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	res = res * sign;
	return (res);
}
