/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:46:00 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/30 21:37:48 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

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

/*int main(int ac ,char **av)
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
	int i  = 0 ;
    while (result[i].str)
    {
        printf("strs[%d].size = %d\n", i, result[i].size);
        printf("strs[%d].str = %s\n", i, result[i].str);
        printf("strs[%d].copy = %s\n", i, result[i].copy);
		i++;
    }

    // Don't forget to free the allocated memory
    free(result);

    return (0);
}*/
