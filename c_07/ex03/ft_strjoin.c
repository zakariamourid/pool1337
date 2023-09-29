/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:24:56 by zmourid           #+#    #+#             */
/*   Updated: 2023/09/28 13:33:46 by zmourid          ###   ########.fr       */
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
int	calc_size(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	int		j;
	int		k;
	char	*str;

	if (size <= 0)
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	len = 0;
	i = 0;
	k = 0;
	len = calc_size(size, strs, sep);
	str = malloc((len * sizeof(char)) + 1);
	while (k < size)
	{
		j = 0;
		while (strs[k][j] != '\0')
			str[i++] = strs[k][j++];
		j = 0;
		while (k != size - 1 && sep[j])
			str[i++] = sep[j++];
		k++;
	}
	str[i] = '\0';
	return (str);
}
int	main(void)
{
	char	*arr[];

	arr[] = {"hello ", "world", "what's up"};
	printf("here is the str =%s", ft_strjoin(3, arr, "TIT"));
}
