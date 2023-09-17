/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:08:31 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/17 19:14:17 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 122 || str[i] <= 97)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int main(int ac ,char **av){
	printf(" is it numeric : '%d'", ft_str_is_lowercase(av[1]));
}
