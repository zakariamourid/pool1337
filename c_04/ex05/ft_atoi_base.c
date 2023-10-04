/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:20:15 by zmourid           #+#    #+#             */
/*   Updated: 2023/10/03 00:19:04 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_pow(int nbr, int power)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (i < power)
	{
		r = r * nbr;
		i++;
	}
	return (r);
}
int	ft_find_index(char c, char *str)
{
	int	i;
	int	index;

	index = -1;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (index);
}
int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if ((base[i] == '-' || base[i] == '+') || base[i] <= 32
			|| base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
int	ft_strlen(char *str, char *base)
{
	int	i;

	i = 0;
	while (ft_find_index(str[i], base) != -1 && str[i])
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	signe;

	signe = 1;
	while (*str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			signe = signe * -1;
	}
	return (signe);
}

int	ft_atoi_base(char *str, char *base)
{
	int	r;
	int	i;
	int	base_len;
	int	str_len;
	int	signe;

	r = 0;
	base_len = 0;
	signe = ft_atoi(str);
	while (base[base_len])
		base_len++;
	str_len = ft_strlen(str, base) - 1;
	if (is_valid(base))
	{
		while ((ft_find_index(*str, base) != -1))
			r = r + ((ft_find_index(*str++, base)) * ft_pow(base_len,
						str_len--));
	}
	return (r * signe);
}
int	main(int ac, char **av)
{
	printf("putnbr = '%d'", ft_atoi_base(av[1], av[2]));
	return (0);
}
