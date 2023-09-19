/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:31:39 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/17 16:43:42 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}	

int main () {
   char src[40] = "This is tutorialspoint.com";
   char dest[12];
   printf("src : %s\n", src);
   ft_strncpy(dest, src, 10);
   printf("Final copied string : %s\n", dest);
   return 0;
}

