/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:20:15 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/24 16:36:09 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	is_duplicate(char *str)
{
	int	i;
	int	count;
	int	j;

	i = 0;
	count = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
			{
				count = 1;
			}
			j++;
		}
		i++;
	}
	return (count);
}

int	is_not_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '-' || str[i] == '+') || str[i] <= 32 || str[i] == 127)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;

	nb = nbr;
	len = ft_strlen(base);
	if (!(len <= 1 || is_duplicate(base) || is_not_valid(base)))
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb < len)
			write(1, &base[nb], 1);
		else
		{
			ft_putnbr_base((nb / len), base);
			ft_putnbr_base((nb % len), base);
		}
	}
}

/*int	main(int ac, char **av)
{
	int	r;
	(void)ac;
	int	i;
	int	signe;

	r = 0;
	i = 0;
	signe = 1;
	if (av[1][i] == '-')
	{
		signe = -1;
		i++;
	}
	while (av[1][i])
	{
		r = r * 10 + (av[1][i] - 48);
		i++;
	}
	r = r * signe;
	ft_putnbr_base(r, av[2]);
}
*/
