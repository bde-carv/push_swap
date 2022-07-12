/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 15:28:27 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/07 14:08:08 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		counter;
	char	*ss1;

	counter = 0;
	ss1 = (char *) malloc (sizeof(char) * ft_strlen(s1) +1);
	if (!ss1)
	{
		return (NULL);
	}
	while (s1[counter] != '\0')
	{
		ss1[counter] = s1[counter];
		counter++;
	}
	ss1[counter] = '\0';
	return (ss1);
}

/*int main()
{
    char str[] = "Hello dude";

    printf("return is:%s\n",ft_strdup(str));

    return(0);
}*/