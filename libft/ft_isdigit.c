/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:10:14 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/05 12:58:03 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit( int arg )
{
	if (arg >= 48 && arg <= 57)
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
    a = 'k';

    ft_isdigit(a);

    printf("return value is:%d\n", ft_isdigit(a));

    return(0);
}*/