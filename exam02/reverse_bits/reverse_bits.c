/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:08:18 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/28 23:40:24 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
char *nbr_byte(int nbr)
{
	int count =0;
	char str[10];
	str[9]= '\0';
	char *str1;
    str1= str;
	if ( nbr < 2)
	{
		nbr+=48;
		str1[count] = nbr;
		count++;
		write(1,&nbr,1 );
	}
		
	else if (nbr >= 2)
	{
		nbr_byte(nbr % 2);
		nbr_byte(nbr / 2);
	}
	return str1;
}

int main()
{
	char str[10];
	printf("str = %s",nbr_byte('c'));
}
