/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putend1_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:22:16 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/10 19:32:51 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	index;

	index = 0;
	if (!s)
	{
		return ;
	}
	while (s[index] != '\0')
	{
		write (fd, &s[index], 1);
		index++;
	}
	write (fd, "\n", 1);
}
