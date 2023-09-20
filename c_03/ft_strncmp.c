/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:34:26 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/20 22:37:53 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if(s1[i] != s2[i] || s1[i] == '\0' || s2[i] != '\0')
		{
			return s1[i] - s2[i];
		}
		i++;
	}
	return (0);
}


int main(int ac,char **av){
	printf("ac='%d'",ac);
	printf("here  is the result: '%d'\n",ft_strncmp(av[1],av[2],5));
	printf("here  is the result ft_cmp: '%d'",strncmp(av[1],av[2],5));
}
