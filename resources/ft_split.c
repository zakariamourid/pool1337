/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmourid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:12:21 by zmourid           #+#    #+#             */
/*   Updated: 2023/10/05 18:40:01 by zmourid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return i;
}

int is_charset(char c,char *charset)
{
	int i;

	i = 0;
	while(charset[i])
	{
		if(charset[i] == c)
			return 1;
		i++;
	}
	return 0;
}
int 	ft_strsize(char *str,char *charset)
{
	int i;
	int count;
	int in_word;

	i = 0;
	count = 0;
	in_word= 0 ;

	while(str[i])
	{
		if(is_charset(str[i],charset))
			in_word = 0;
			else if(!in_word)
			{
				in_word = 1;
				count++;
			}
		i++;
	}
	return count;
}
char *get_word(char **strs,char *charset)
{
	char *str;
	char *word_start;
	int word_len;
	char *word;
	int i;
	str = *strs;
	while(str && is_charset(*str,charset))
		str++;
	word_start = str;
	while(str && !is_charset(*str,charset))
			str++;
	word_len = str - word_start;
	word = malloc(word_len + 1);
	if(!word)
		return NULL;
	i = 0;
	while(i < word_len)
	{
		word[i] = word_start[i];
		i++;
	}
	word[word_len] = '\0';
	return word;
}
char	*get_next_word(char **str, char *charset)
{
	char	*word_start;
	int		word_len;
	char	*word;
	int		i;

	while (**str != '\0' && is_charset(**str, charset))
		(*str)++;
	word_start = *str;
	while (**str != '\0' && !is_charset(**str, charset))
		(*str)++;
	word_len = *str - word_start;
	word = (char *)malloc(word_len + 1);
	if (!word)
		return (NULL);
	if (word)
	{
		i = 0;
		i--;
		while (i++ < word_len)
			word[i] = word_start[i];
		word[word_len] = '\0';
	}
	return (word);
}
char  **ft_split(char *str, char *charset)
{
 	int i = 0;
	int j = 0;
 	int size = 0;
	char **strs;

	size = ft_strsize(str , charset);
	strs = malloc(sizeof(char *) * (size + 1));
	while(*str)
	{
		if(!is_charset(*str,charset))
			strs[i++] = get_next_word(&str,charset);
		else
			str++;
	}
	strs[i] = NULL;
	return strs;
}
int main() {
    char *str = "Hello$World!This,Is,My,Test";
    char *charset = ",!$";

    char **result = ft_split(str, charset);

    if (result) {
        for (int i = 0; result[i] != NULL; i++) {
            printf("Word %d: %s\n", i + 1, result[i]);
            free(result[i]);
        }

        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
