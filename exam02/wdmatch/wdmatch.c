/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:23:20 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/28 23:01:11 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void put_str(char *str)
{
	int i=0;
	while(str[i])
	{
		write(1,&str[i],1);
		i++;
	}
}
int main(int ac,char **av)
{
	int i = 0;
	int j = 0;
	int found = 0;
	int len = 0;
	if(ac != 3)
	{
		write(1,"\n",1);
		return 0;
	}
	while(av[1][len])
		len ++;
	i = 0;
	while(av[1][i])
	{
	 	while(av[2][j])
		{
			if(av[1][i] == av[2][j])
			{
				found++;
				break;
			}
			j++;
		}
		i++;
	}
	if(found == len)
		put_str(av[1]);
	write(1,"\n",1);
	return 0;
}
