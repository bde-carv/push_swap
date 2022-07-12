/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:54:05 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/06 21:09:05 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t			counter;
	unsigned char	*dest;
	unsigned char	*src;

	counter = 0;
	dest = (unsigned char *)str1;
	src = (unsigned char *)str2;
	if (dest <= src)
	{
		while (counter < n)
		{
			dest[counter] = src[counter];
			counter++;
		}
	}
	else
	{
		while (n > 0)
		{
			dest[n - 1] = src[n - 1];
			n--;
		}
	}
	return (str1);
}

/*int main()
{
   
	char source[] = "lorem ipsum dolor sit amet";
	char *desti = source + 1; //orem ipsum dolor sit amet

    size_t n = 8;

    printf("desti before:%s\n", desti);

    //ft_memmove(desti, source, n);

    //printf("desti after:%s\n", ft_memmove(desti, source, n));

	printf("original:%s\n", ft_memmove(desti, source, n));

    return(0);   
}*/