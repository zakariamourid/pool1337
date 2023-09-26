/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:21:02 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/26 14:26:55 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	i = dest_len;
	j = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (src[j] != '\0' && i < (size - 1) && size != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
