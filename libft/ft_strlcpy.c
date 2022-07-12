/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:46:08 by bde-carv          #+#    #+#             */
/*   Updated: 2022/06/24 20:13:51 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	lensrc;

	count = 0;
	lensrc = ft_strlen(src);
	if (!dst)
	{
		return (lensrc);
	}
	if (dstsize > 0)
	{
		while (src[count] != '\0' && (count < (dstsize -1)))
		{
			dst[count] = src[count];
			count++;
		}
	}
	if (dstsize > 0)
		dst[count] = '\0';
	return (lensrc);
}

/*int main()
{
	char *desti;
	desti = malloc(15 * sizeof(char));
	//desti = "Hello";
    //char desti[] = "Hello";

    //char source[] = "dude";

	char *source;
	source = malloc(28* sizeof(char));
	source = "lorem ipsum dolor sit amet";

	

    size_t n;
    n = 0;
    
    printf("desti before:%s\n", desti);
   //ft_strlcpy(desti, source, n);
    ft_strlcpy(desti, source, n);
    printf("desti after:%s\n", desti);

    //printf("return value is:%zu\n", ft_strlcpy(desti, source, n));
	return(0);
}*/