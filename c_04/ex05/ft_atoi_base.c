/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:20:15 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/24 16:29:23 by zmourid          ###   ########.fr       */
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

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			index = i;
		i++;
	}
	return (index);
}

int	is_not_valid(char *str, char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if ((base[i] == '-' || base[i] == '+') || base[i] <= 32
			|| base[i] == 127)
		{
			return (1);
		}
		i++;
	}
	i = 0;
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == str[j])
			{
				count = 1;
			}
			j++;
		}
		if (count == 0)
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	r;
	int	i;
	int	base_len;
	int	str_len;
	int	signe;

	r = 0;
	i = 0;
	signe = 1;
	while (*str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			signe = signe * -1;
		}
		str++;
	}
	base_len = ft_strlen(base);
	str_len = ft_strlen(str);
	str_len--;
	printf("str [i] = '%c'", str[i]);
	while (str[i])
	{
		r = r + ((ft_find_index(str[i], base)) * ft_pow(base_len, str_len));
		i++;
		str_len--;
	}
	return (r * signe);
}
int	main(void)
{
	printf("putnbr = '%d'", ft_atoi_base("    -+a", "0123456789abcdef"));
	return (0);
}
