/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:31:39 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/24 15:03:43 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	if (size == 0)
	{
		return (len);	
	}
	while (i < size -1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
		dest[i] = '\0';
	i = 0;
		return (len);
}

#include <stdio.h>

int main() {
    char source[] = "Hello, world!";
    char destination[1]; // Make sure the destination buffer is large enough

    // Copy the string using your ft_strlcpy function
    unsigned int copiedLength = ft_strlcpy(destination, source, 0);

    // Print the copied string and its length
    printf("Copied String: %s\n", destination);
    printf("Length of Copied String: %u\n", copiedLength);

    return 0;
}

