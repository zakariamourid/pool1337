/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_test_clean.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:26:17 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/15 20:58:31 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_put_nbrs(int i, int j, int k, int l)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &k, 1);
	write(1, &l, 1);
	if (!(i == 57 && j == 56 && k == 57 && l == 57))
		write(1, ", ", 2);
	l++;
	return (l);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 48;
	while (i <= 57)
	{
	j = 48;
		while (j <= 57)
		{
			k = i;
			while (k <= 57)
			{
				l = j + 1;
				while (l <= 57)
				{
					l = ft_put_nbrs(i, j, k, l);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
int main(void){
	ft_print_comb2();
}
