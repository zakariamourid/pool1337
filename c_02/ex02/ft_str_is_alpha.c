/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:08:14 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/17 18:01:18 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	while (str[i])
	{
		if (!((str[i] <= 'Z' && str[i] >= 'A')
				|| (str[i] <= 'z' && str[i] >= 'a')))
		{
			result = 0;
			return (result);
		}
	i++;
	}
	return (result);
}
