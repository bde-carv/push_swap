/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:12:55 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/04 19:12:06 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*jkl;
	unsigned int	counter;

	jkl = (unsigned char *)str;
	counter = 0;
	while (counter < len)
	{
		jkl[counter] = (unsigned char)c;
		counter++;
	}
	return (str);
}

/*int main()
{
    char str[] = "Hello dude";
    int c;
    c = 'g';

    size_t n;
    n = 5;

    ft_memset(str, c, n);

    printf("return is:%s\n",ft_memset(str, c, n));

	printf("return is:%s\n", memset(str, c, n));

    return(0);
}*/