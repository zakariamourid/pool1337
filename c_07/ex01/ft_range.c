/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:42:45 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/27 17:21:44 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
/*int main()
{
    int *tab = ft_range(-2,5);
	int i = 0;
	while (i <  5 +2)
		printf("i= %d\n",tab[i++]);
}*/
