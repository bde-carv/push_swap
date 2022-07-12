/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:41:50 by bde-carv          #+#    #+#             */
/*   Updated: 2022/06/24 20:09:32 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		counter;

	str = (char *)s;
	counter = 0;
	while (str[counter] != (char)c)
	{
		if (str[counter] == '\0')
		{
			return (NULL);
		}
		counter++;
	}
	return (&str[counter]);
}

/*int main ()
{
    const char string[] = "Hello dude";

    int a;
    a = 'l';

    char *the;
    
    the = ft_strchr(string, a);

    printf("string after %c is %s\n", a, the);
    
    return(0);
}*/