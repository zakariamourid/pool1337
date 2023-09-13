/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:38:07 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/13 22:57:17 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		write(1 ,"-", 1);
		nbr=-nbr;
	}
	if (nbr < 10)
	{
		nbr+=48;
		write(1, &nbr, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int	main(void)
{
	ft_putnbr(-24);
	write(1, " ", 1);
	ft_putnbr(-1234567);
	write(1, " ", 1);
	ft_putnbr(-2147483647);
	write(1, " ", 1);
	return (0);
}
