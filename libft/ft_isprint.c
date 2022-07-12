/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:37:33 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/04 19:46:55 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint( int arg)
{
	if (arg >= 32 && arg <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int main ()
{
    int a;
    a = 7;

    ft_isprint(a);

    printf("return value is:%d\n", ft_isprint(a));

    return(0);
}*/