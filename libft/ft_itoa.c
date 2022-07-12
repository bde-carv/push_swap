/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-carv <bde-carv@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:44:29 by bde-carv          #+#    #+#             */
/*   Updated: 2022/05/11 14:27:51 by bde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_length(long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
	{
		return (len + 1);
	}
	if (nb < 0)
	{
		nb = nb * (-1);
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_if(long nbr, char *num1)
{
	if (nbr == 0)
	{
		num1[0] = 48;
	}
	return (num1);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		i;
	long	nb;

	nb = n;
	i = ft_length(nb);
	num = (char *)malloc(sizeof(char) * (ft_length(nb) + 1));
	if (!num)
		return (NULL);
	num[i--] = '\0';
	ft_if(nb, num);
	if (nb < 0)
	{
		num[0] = '-';
		nb = nb * (-1);
	}
	while (nb > 0)
	{
		num[i] = 48 + (nb % 10);
		nb = nb / 10;
		i--;
	}
	return (num);
}

/*int main()
{
	int num;

	num	= 0;
	printf("return is:%s\n",ft_itoa(num));
	return (0);
}*/