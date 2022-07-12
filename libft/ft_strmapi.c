/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:37:05 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/10 17:31:28 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	char			*string;
	unsigned int	counter;

	if (!s || !f)
	{
		return (NULL);
	}
	string = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!string)
	{
		return (NULL);
	}
	counter = 0;
	while (s[counter] != '\0')
	{
		string[counter] = f(counter, s[counter]);
		counter++;
	}
	string[counter] = '\0';
	return (string);
}

/*char ft_function(unsigned int counter, char str)
{
	printf("counter value:%d\n char value:%c\n", counter, str);
	return (str);
}
int main()
{
	char *str = "Hello";

	

	printf("return is:%s\n", ft_strmapi(str, ft_function));


	return (0);
}*/