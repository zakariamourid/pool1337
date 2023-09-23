/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 20:56:12 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/23 15:44:17 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int is_duplicate(char *str)
{
	int	i = 0;
	int	count = 0;
	int	j;
	while(str[i])
	{
		j= i+1;
		while(str[j])
		{
			if(str[i] == str[j])
			{
				count = 1 ;
			}
			j++;
		}
		i++;

	}
	return count;
}
int is_operator(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if(str[i] == '-' || str[i] == '+')
		{
			return 1;
		}
		i++;
	}
	return 0;
}
void	ft_putnbr_base(int nbr,char *base)
{
	int	len;

	len = 0;
	while(base[len])
	{
		len++;
	}
	if(!(len <= 1  || is_duplicate(base) || is_operator(base)))
	{
		if (nbr == -2147483648)
		{
			write(1, "-2147483648", 11);
		}
		else
		{
			if (nbr < 0)
			{
				write(1, "-", 1);
				nbr = -nbr;
			}
			if (nbr < len)
			{
				write(1, &base[nbr], 1);
			}
			else
			{
				ft_putnbr_base((nbr / len), base);
				ft_putnbr_base((nbr % len), base);
			}
		}
	}
}

/*int	main(int ac,char **av)
{
	int r = 0;
	int i = 0;
	int signe = 1;
	if(av[1][i] == '-')
	{
		signe = -1;
		i++;
	}
	while(av[1][i])
	{
		r=r*10 +(av[1][i] - 48);
		i++;
	
	}
	r = r*signe;
	ft_putnbr(r,av[2]);
}
*/
