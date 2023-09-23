/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 23:50:58 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/23 13:17:45 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:25:58 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/18 23:48:25 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(int nbr)
{
	int	div;
	int	mod;

	div = nbr / 16;
	mod = nbr % 16;
	if (div < 10)
	{
		div += 48;
		write(1, &div, 1);
	}
	else
	{
		div += 87;
		write(1, &div, 1);
	}
	if (mod < 10)
	{
		mod += 48;
		write(1, &mod, 1);
	}
	else
	{
		mod += 87;
		write(1, &mod, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] < 32 || str[i] == 127))
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			ft_print_hex(str[i]);
		}
		i++;
	}
}
