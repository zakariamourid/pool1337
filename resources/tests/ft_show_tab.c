/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 21:43:11 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/30 22:05:28 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;
	int		len;

	len = ft_strlen(str);
	dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*strs;
	int			i;

	strs = malloc((ac * sizeof(t_stock_str) + 1));
	if (strs == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		strs[i].str = av[i];
		strs[i].copy = ft_strdup(av[i]);
		strs[i].size = ft_strlen(av[i]);
		i++;
	}
	strs[i].str = NULL;
	return (strs);
}
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
///////////////////////////////
void	ft_putnbr(int	nbr)
{
	long nb;
	int i;
	nb = nbr;
	if(nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if(nb < 10)
	{
		nb += 48;
		write(1, &nb, 1);
	}else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
		write(1,&str[i++],1);
}

void ft_show_tab(struct	s_stock_str *par)
{
	int i;

	i = 0;
	while(par[i].str)
	{
		ft_putstr(par[i].str);
		write(1,"\n",1);
		ft_putstr(par[i].str);
		write(1,"\n",1);
		ft_putnbr(par[i].size);
		write(1,"\n",1);
		i++;
	}
}
int main(int ac ,char **av)
{
 // Example usage of ft_strs_to_tab
    t_stock_str *result = ft_strs_to_tab(ac, av);

   // Check if allocation was successful
    if (result == NULL)
    {
        printf("Memory allocation failed.\n");
        return (1); // Exit with an error code
    }

    // Print the converted strings
	ft_show_tab(result);

    // Don't forget to free the allocated memory
    free(result);

    return (0);
}
