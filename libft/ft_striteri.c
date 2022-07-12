/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:34:35 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/10 18:25:48 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	unsigned int	index;

	index = 0;
	if (!s || !f)
	{
		return ;
	}
	while (s[index] != '\0')
	{
		f(index, &s[index]);
		index++;
	}
}

/*void ft_function(unsigned int index, char *str)
{
	printf("index value:%d\n char value:%c\n", index, &str);
	// return (str);
}

int main()
{
	char	*string;

	string = "Hello";
	return (0);
}*/