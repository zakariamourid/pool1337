/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:19:33 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/26 15:59:08 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int		count;
	int		i;
	long	br;

	i = 2;
	nbr = nb;
	count = 0;
	if (nbr <= 1)
		return (0);
	if (nbr <= 3)
		return (1);
	while (i < nbr)
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
/*int	main(void)
{
	printf("Is 2 prime? (Expected: 1) - Result: %d\n", ft_is_prime(2));
	printf("Is 17 prime? (Expected: 1) - Result: %d\n", ft_is_prime(17));
	printf("Is 0 prime? (Expected: 0) - Result: %d\n", ft_is_prime(0));
	printf("Is 1 prime? (Expected: 0) - Result: %d\n", ft_is_prime(1));
	printf("Is 15 prime? (Expected: 0) - Result: %d\n", ft_is_prime(15));
	printf("Is 23 prime? (Expected: 1) - Result: %d\n", ft_is_prime(21));
}
*/
