/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:24:56 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/27 21:45:53 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char	*ft_strjoin(int size,char **strs)
{
 	int len = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	char *str;
	while( i < size) //calculating the total length of all strings 
	{
		j = 0;
		while (strs[i][j])
			j++;
		len+=j;
		i++;
	}
	printf("%d",len);
	str = malloc((len *sizeof(char)) + size);
	//added size for the sep cases + the size of all the strs 
	//the last string does not require a seperator so it will be a minus 1 .
	i = 0;
	j = 0;
	while( i < len)
	{
		j = 0;
		while (strs[k][j] != '\0')
		{
			str[i] = strs[k][j];
			j++;
			i++;
		}
		if (k != size - 1)
		{
			str[i] = ' ';	
			i++;
		}
		k++;
	}
	str[i] = '\0';//closing the string
	return (str);
}
/* 'i' is responsible for the str iteration
// 'k' is for iterating over the "strings"
// 'j' is for iterating over the "chars" of the "strings"
int	main()
{
 char *arr[] = {"hello ","world", "what's up"};	
 printf("here is the str =%s",ft_strjoin(3,arr));
}*/
