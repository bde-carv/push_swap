/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:49:07 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/07 14:06:43 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;
	int	strlen;

	i = 0;
	strlen = 0;
	while (str[i] != '\0')
	{
		strlen++;
		i++;
	}
	return (strlen);
}

/*int main ()
{
    char    text[] = "Hello";
    ft_strlen(text);

    printf("length is:%zu\n", ft_strlen(text));

    return (0);

}*/