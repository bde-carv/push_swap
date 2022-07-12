/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:29:14 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/04 16:50:36 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero( void *dst, size_t n)
{
	unsigned int	counter;
	unsigned char	*lkp;

	lkp = (unsigned char *)dst;
	counter = 0;
	while (counter < n)
	{
		lkp[counter] = '\0';
		counter++;
	}
}

/*int main ()
{
    char str[] = "Hello Boss";

    size_t n;

    n = 3;

    ft_bzero(str, n);
    printf("return is:%s\n", str);

    return(0); 
}*/