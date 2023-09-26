/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:03:22 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/26 20:30:19 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		count;
	long	i;
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
			count++;
		i++;
	}
	if (count >= 2)
		return (0);
	else
		return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	found;

	found = 0;
	while(found == 0)
	{
		if(ft_is_prime(nb))
			found = 1;
		i++;
	}
	return (nb);
}
