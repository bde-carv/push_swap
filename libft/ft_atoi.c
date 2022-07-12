/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 19:18:23 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/05 14:42:02 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	counter;

	res = 0;
	sign = 1;
	counter = 0;
	while (str[counter] == 32 || (str[counter] >= 9 && str[counter] <= 13))
	{
		counter++;
	}
	if (str[counter] == '-')
	{
		sign = -1;
		counter++;
	}
	else if (str[counter] == '+')
		counter++;
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		res = res * 10 + str[counter] - '0';
		counter++;
	}
	return (sign * res);
}

/*int main ()
{
    char string[] = "ttg";

    printf("return is:%d\n", ft_atoi(string));

	printf("original is:%d\n", atoi(string));


    return (0);
}*/