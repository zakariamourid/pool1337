/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:39:07 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/26 21:12:28 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power >= 2)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}

/*int	main(void)
{
	printf("power of :  '%d'", ft_recursive_power(5, 4));
*/
