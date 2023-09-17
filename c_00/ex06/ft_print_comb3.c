/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:11:17 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/17 20:18:44 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2()
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a +1;
		while (b <= 99)
		{
			ft_putchar('0' + (a / 10));
			ft_putchar('0' + (a % 10));
			write(1," ",1);
			ft_putchar('0' + (b / 10));
			ft_putchar('0' + (b % 10));
			if( a!=99)
				write(1, ", ",2);
			b++;
		}
		a++;
	}
} 
int main(void)
{
	ft_print_comb2();
}

