/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:08:19 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/13 18:21:53 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int i, int j, int k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 48;
	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			k = j + 1;
			while (k <= 57)
			{
				print_numbers(i, j, k);
				if (!(i == 55 && j == 56 && k == 57))
				{
					write(1, ", ", 2);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
