/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:44:12 by bde-carv          #+#    #+#             */
/*   Updated: 2022/07/01 18:24:30 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ch;
	size_t	cn;

	ch = 0;
	cn = 0;
	if (needle == NULL || needle[cn] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[ch] != '\0' && ch < len)
	{
		cn = 0;
		while (haystack[ch + cn] == needle[cn] && (ch + cn) < len)
		{
			if (needle[cn + 1] == '\0')
			{
				return ((char *)(haystack + ch));
			}
			cn++;
		}
		ch++;
	}
	return (NULL);
}

/*int main ()
{
    char find[] = "ipsumm";
    char haystak[] = "lorem ipsum dolor sit amet";

    size_t a;
    a = 30;

    printf("return is:%s\n", ft_strnstr(haystak, find, a));
	printf("original:%s\n", strnstr(haystak, find, a));

    return(0);
}*/