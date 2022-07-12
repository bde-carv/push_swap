/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 20:23:05 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/07 18:12:37 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	nlen;

	nlen = 0;
	if (s == 0)
	{
		return (NULL);
	}
	if (start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	nlen = ft_strlen(s + start);
	if (nlen < len)
	{
	len = nlen;
	}
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
	{
		return (NULL);
	}
	ft_strlcpy(substr, (s + start), (len +1));
	return (substr);
}

/*int main () 
{
    char *s = "lorem ipsum dolor sit amet";
    
    unsigned int start = 0;

    size_t len = ft_strlen(s);

    printf("return is:%s\n",ft_substr(s, start, len));

    return(0);
}*/