/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:43:22 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/05 18:39:31 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	counter;

	counter = 0;
	if (n <= 0)
		return (0);
	while (counter + 1 < n && str1[counter] != '\0' && str2[counter] != '\0')
	{
		if (str1[counter] != str2[counter])
			break ;
		counter++;
	}
	return ((unsigned char)str1[counter] - (unsigned char)str2[counter]);
}

/*int main ()
{
    char str1[] = "test\200";
    char str2[] = "test\0";
    
    int n;
    n = 6;

    ft_strncmp(str1, str2, n);

    printf("return value is:%d\n", ft_strncmp(str1, str2, n));
	printf("original is:%d\n", strncmp(str1,str2, n));

    return (0);
}*/