/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:49:28 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/20 22:51:54 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	printf("here  is the size: '%d'\n",j);
	while (src[i])
	{
		dest[j] = src[i];
	printf("here  is the j: '%d'\n",j); 
	printf("here  is i: '%d'\n",i); 

		i++;
		j++;
	}
	printf("sf salina ha i li khas ykoun fih dak 0 : '%d'\n",j); 
	dest[j] = '\0';
	return (dest);
}
int main(){
	char str1[100] = "hello ";
	char str3[100] = "hello";
	char str2[] = "world";
	printf("here  is the result: '%s'\n",ft_strcat(str1,str2));
	printf("here  is the result bro: '%s'",strcat(str3,str2));
}
