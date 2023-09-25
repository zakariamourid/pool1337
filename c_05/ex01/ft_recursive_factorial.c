/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_recursive_factorial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:24:41 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/25 10:33:33 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factoriel(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	else
	{
		return  nb * ft_recursive_factoriel(nb - 1);
	}
}

/*int	main()
{
	printf("fact of 5 is : '%d'",ft_recursive_factoriel(5));
}
*/
