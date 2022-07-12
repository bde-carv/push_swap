/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 18:26:57 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/12 15:56:16 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_words(char const *s, char c)
{
	int	counter;
	int	words;

	counter = 0;
	words = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] != c)
		{
			words++;
			while (s[counter] != c && s[counter] != '\0')
			{
				counter++;
			}	
		}
		else
		{
			counter++;
		}
	}
	return (words);
}

char	*word_dup(const char *s1, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
	{
		word[i] = s1[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	a;
	size_t	p;
	int		index;
	char	**splitstr;

	splitstr = malloc((ft_words(s, c) + 1) * sizeof(char *));
	if (!splitstr || !s)
		return (0);
	a = 0;
	p = 0;
	index = -1;
	while (a <= ft_strlen(s))
	{
		if (s[a] != c && index < 0)
			index = a;
		else if ((s[a] == c || a == ft_strlen(s)) && index >= 0)
		{
			splitstr[p] = word_dup(s, index, a);
			p++;
			index = -1;
		}
		a++;
	}
	splitstr[p] = 0;
	return (splitstr);
}
