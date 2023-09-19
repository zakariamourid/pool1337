/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:31:39 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/19 15:51:51 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (i < size-1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
		dest[size -1 ] = '\0';
	return (dest);
}
int main () {
   char src[40] =  "aloha misacacas!";
   char dest[12] = "hello world!";
   printf("src : %s\n", src);
   ft_strlcpy(dest, src, 12);
   printf("Final copied string : %s\n", dest);
   return 0;
}
