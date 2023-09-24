/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:11:40 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/20 23:46:21 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0')
	{
		write(1,&argv[0][i],1);
		i++;
	}
	write(1,"\n",1);
}