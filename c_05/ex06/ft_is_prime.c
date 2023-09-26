/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:19:33 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/26 20:39:57 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		count;
	long		i;
	long	nbr;

	i = 2;
	nbr = nb;
	count = 0;
	if (nbr <= 1)
		return (0);
	if (nbr <= 3)
		return (1);
	while (i < nbr / i)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}
