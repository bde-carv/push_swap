/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:35:18 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/04 17:51:51 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
	}
	else
	{
		return (c);
	}
	return (c);
}

/*int main ()
{
    int a;
    a = '.';

    ft_tolower(a);
    printf("return value is:%c\n", ft_tolower(a));

    return(0);
}*/