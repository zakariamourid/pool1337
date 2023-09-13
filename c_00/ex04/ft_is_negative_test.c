/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:04:52 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/13 16:44:06 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	if (n >= 0)
	{
		sign = 'P';
	}
	else if (n < 0)
	{
		sign = 'N';
	}
	write(1, &sign, 1);
}

int	main(void)
{
	ft_is_negative(4);
	ft_is_negative(-3);
	return (0);
}
