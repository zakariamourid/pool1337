/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:08:39 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/28 21:49:12 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int char_exist(int pos ,char *str)
{
	int i = 0;
	while(i < pos)
	{
		if(str[i] == str[pos])
			return 1;
		i++;
	}
	return 0;

}
int main(int ac , char **av)
{
	int i = 0;
	int j = 0;
	if(ac != 3)
	{
		write(1,"\n",1);
		return 0;
	}
	while(av[1][i])
	{
		j = 0;
			while(av[2][j])
			{

				if(av[2][j] == av[1][i])
				{
					if(!(char_exist(i,av[1])))
					{
					write(1,&av[1][i], 1);
					}
					break;
				}
				j++;
			}
			i++;
	}
		write(1,"\n",1);
		return 0;
}
