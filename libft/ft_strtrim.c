/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:59:45 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/07 18:25:35 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int				counter;
	unsigned int	i;
	size_t			lens1;

	counter = 0;
	i = 0;
	lens1 = ft_strlen(s1);
	if (!s1 || !set)
	{
		return (NULL);
	}
	while (s1[counter] != '\0' && ft_strchr(set, s1[counter]))
	{
		counter++;
		i++;
	}
	while (lens1 > 0 && ft_strchr(set, s1[lens1]))
	{
		counter++;
		lens1--;
	}
	lens1 = (ft_strlen(s1) - counter);
	return (ft_substr(s1, i, (lens1 + 1)));
}

/*int main ()
{
    char *str1 = "abcHello you got bagscba?";
    
    char *set = "abc";
    
    printf("Return is:%s\n", ft_strtrim(str1, set));
    
    return (0);
}*/