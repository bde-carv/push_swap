/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:02:04 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/05 15:56:49 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	counter;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	counter = 0;
	while (counter < n)
	{
		if (str1[counter] != str2[counter])
		{
			return (str1[counter] - str2[counter]);
		}
		counter++;
	}
	return (0);
}

/*int main ()
{
    char str1[] = "abcdefgh";
    char str2[] = "abcdwxyz";

    size_t a;
    a = 6;

    printf("return value is :%d\n", ft_memcmp(str1, str2, a));
	printf("original:%d\n", memcmp(str1, str2, a));

    return (0);
}*/