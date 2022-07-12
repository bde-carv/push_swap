/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:47:13 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/12 19:56:43 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	counter;
	unsigned char	*str;
	unsigned char	go;

	counter = 0;
	str = (unsigned char *)s;
	go = (unsigned char)c;
	while (counter < n)
	{
		if (str[counter] == go)
		{
			return (&str[counter]);
		}
		counter++;
	}
	return (NULL);
}

/*int main()
{
    //char *string = "bonjourno";
    int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    int a;
    a = -1;

    size_t n;
    n = 7;

	printf("own:%s\n", (char *)ft_memchr(tab, a, n));

   // printf("return value is:%u\n", ft_memchr(string, a, n));

	printf("original:%s\n", (char *)memchr(tab, a, n));


    return(0);
}*/