/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:58:44 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/28 22:15:07 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int exist_tab(char *tab,int pos,char c)
{
	int i = 0;
	while(i < pos)
	{
		if(tab[i] == c)
			return 1;
		i++;
	}	
	return 0;
}
int main(int ac ,char **av)
{	
	char tab[100];
	int i = 0;
	int pos = 0;
	if(ac != 3)
	{
		write(1,"\n",1);
		return 0;
	}
	while(av[1][i])
	{
		if(!(exist_tab(tab ,pos,av[1][i])))
		{
			write(1,&av[1][i],1);
			tab[pos] = av[1][i];
			pos++;
		}
		i++;
	}
	i = 0;
	while(av[2][i])
	{
		if(!(exist_tab(tab ,pos,av[2][i])))
		{
			write(1,&av[2][i],1);
			tab[pos] = av[2][i];
			pos++;
		}
		i++;
	}
	write(1,"\n",1);
}
