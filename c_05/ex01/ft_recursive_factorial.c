/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_recursive_factorial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:24:41 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/26 20:50:18 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{
	printf("fact of 5 is : '%d'",ft_recursive_factoriel(5));
}
*/
