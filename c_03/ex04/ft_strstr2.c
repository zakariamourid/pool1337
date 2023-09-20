/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:26:55 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/20 17:50:37 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str,char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if(to_find[i] == '\0')
	{
		return str;
	}
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if(to_find[j + 1] == '\0')
			{
				return str+i;
			} 
			j++;
		}
		i++;
	}
	return 0;
}
int main(){
	char str1[100] = "hello ";
	char str3[100] = "hello ";
	char str2[] = "lo";
	printf("here  is the result: '%s'\n",ft_strstr(str1,str2));
	printf("here  is the result bro: '%s'",strstr(str3,str2));
}
