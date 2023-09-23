/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sruotolo <sruotolo@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:31:16 by sruotolo          #+#    #+#             */
/*   Updated: 2023/09/13 14:12:46 by sruotolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *str, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			i++;
		}
		else
		{
			counter++;
			while (str[i] && str[i] != c)
			{
				i++;
			}
		}
	}
	return (counter);
}

// This function frees dinamicly allocated memory, we are decrementing i
// Because of rule FILO
char	**free_memory(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (0);
}

// This function puts splited words in array of strings 
char	*put_words(char *word, char const *s, int i, int len)
{
	int	j;

	j = 0;
	while (len > 0)
	{
		word[j] = s[i - len];
		j++;
		len--;
	}
	word[j] = '\0';
	return (word);
}

// This function should split words 
char	**split_words(char const *s, char c, char **s2, int num_of_words)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < num_of_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		s2[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!s2)
			return (free_memory(s2, word));
		put_words(s2[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	s2[word] = 0;
	return (s2);
}

//  Main function that is splitting words using delimiter char c
char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	number_of_words;

	if (!s)
		return (0);
	number_of_words = count_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (number_of_words + 1));
	if (!s2)
		return (0);
	split_words(s, c, s2, number_of_words);
	return (s2);
}
