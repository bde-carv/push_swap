/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:13:04 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/05 14:47:17 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	counter;
	unsigned char	*ikl;
	unsigned char	*plk;

	if (dest == NULL && !src)
	{
		return (NULL);
	}
	ikl = (unsigned char *)dest;
	counter = 0;
	plk = (unsigned char *)src;
	while (counter < n)
	{
		ikl[counter] = plk[counter];
		counter++;
	}
	return (dest);
}

/*int main()
{
    char source[] = "Hello dude";
    
    char desti[30];

    size_t n = 30;

    printf("desti before:%s\n", desti);

    ft_memcpy(desti, source, n);

    printf("desti after:%s\n", ft_memcpy(desti, source, n));

    return(0);
}*/