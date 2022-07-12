/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:33:59 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/07 14:56:06 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iszero(char *s1, char *s2)
{
	if (s1 == 0 || s2 == 0)
	{
		return (0);
	}
	return (0);
}

char	*ft_nomalloc(char *newstr)
{
	if (!newstr)
	{
		return (NULL);
	}
	return ((char *)newstr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		p;
	char	*newstr;

	i = 0;
	p = 0;
	ft_iszero((char *)s1, (char *)s2);
	newstr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	ft_nomalloc((char *)newstr);
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[p] != '\0')
	{
		newstr[i] = s2[p];
		p++;
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

	/*int	main ()
    {
        char *s1 = "Hello you ";
        char *s2 = "dont know";

        printf("newstring is:%s\n", ft_strjoin(s1, s2));

        return(0);   
    }*/