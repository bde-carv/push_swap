/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 13:57:22 by bde-carv          #+#    #+#             */
/*   Updated: 2022/06/24 20:14:58 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*point;
	size_t	i;
	size_t	product;

	i = 0;
	point = (void *)malloc(count * size);
	product = count * size;
	if ((product / count != size) && count != 0)
	{
		return (NULL);
	}
	if (!point)
	{
		return (NULL);
	}
	while (i < count * size)
	{
		point[i] = 0;
		i++;
	}
	return ((void *)point);
}

/*int main()
{
    size_t n_elements;
    size_t e_size;

    n_elements = 30;
    e_size = sizeof(int);

    char *ptr;
    char *ptr2;    
    ptr = ft_calloc(n_elements,e_size);
    printf("return own:%s\n", ptr);
    ptr2 = calloc(n_elements, e_size);
    printf("return original:%s\n", ptr2);
   // printf("return is:%d\n", ft_calloc(n_elements,e_size));
    return(0);
}*/