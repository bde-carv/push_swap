/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:39:30 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/11 12:55:28 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		write (fd, "-", 1);
		num = num * (-1);
	}
	if (num < 10)
	{
		ft_putchar_fd(num + '0', fd);
	}
	if (num >= 10)
	{
		ft_putnbr_fd (num / 10, fd);
		ft_putnbr_fd (num % 10, fd);
	}
}

/*int main()
{
	int a;
	int fd;

	a = -100;
	fd = 1;

	ft_putnbr_fd(a, fd);

	return (0);
}*/