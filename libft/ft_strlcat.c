/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:48:24 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/06 16:56:41 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	index;

	destlen = ft_strlen (dst);
	srclen = ft_strlen (src);
	index = 0;
	if (dstsize < (destlen + 1))
	{
		return (dstsize + srclen);
	}
	if (dstsize > (destlen + 1))
	{
		while (src[index] != '\0' && (destlen + 1 + index) < dstsize)
		{
			dst[destlen + index] = src[index];
			index++;
		}
	}
	dst[destlen + index] = '\0';
	return (destlen + srclen);
}

/*int main ()
{
    char dest[] = "Hello";
    char src[] = "dudee";
    int p;

    size_t n;
    n = 15;
    printf("dest before:%s\n", dest);
	p = strlcat(dest, src, n);
    printf("return value is:%d\n", p);
    printf("dest after:%s\n", dest);

    return(0);
}*/