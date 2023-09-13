/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:08:19 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/13 17:11:17 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 48;
	while ( i <= 57 )
	{
		j = i + 1;
		while ( j <= 57 )
		{
			write(1, &i, 1);
			write(1, &j, 1);
			write(1,", ", 2);
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
			
