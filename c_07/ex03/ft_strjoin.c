/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 20:47:54 by zmourid           #+#    #+#             */
/*   Updated: 2023/10/05 20:14:36 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_concat(char *src, char *dest)
{
	int	i;

	i = 0;
	while (*src)
	{
		i++;
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (i);
}

int	strs_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	sep_size;

	i = 0;
	len = 0;
	sep_size = ft_strlen(sep);
	while (i < size)
	{
		len += ft_strlen(strs[i++]);
	}
	len += sep_size * (size - 1);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		strs_size
	int		i;
	int		count;
	char	*str;

	strs_size = strs_len(size, strs, sep);
	i = 0;
	count = 0;
	if (size == 0)
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(strs_size + 1);
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str += ft_concat(strs[i], str);
		if (i++ != size - 1)
			str += ft_concat(sep, str);
	}
	return (str - strs_size);
}
