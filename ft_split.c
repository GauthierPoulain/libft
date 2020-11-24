/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapoulai <gapoulai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:25:28 by gapoulai          #+#    #+#             */
/*   Updated: 2020/11/24 15:46:37 by gapoulai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c)
{
	int		i;
	int		words;
	int		check;

	i = 0;
	words = 0;
	while (s[i])
	{
		check = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			i++;
			check = 1;
		}
		words += check;
	}
	return (words);
}

static int		get_word_length(char const *s, char c, int index)
{
	int		l;

	l = 0;
	while (s[index] && s[index] != c)
	{
		index++;
		l++;
	}
	return (l);
}

char			**ft_split(char const *s, char c)
{
	int		word_count;
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	word_count = count_words(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (word_count + 1))))
		return (NULL);
	while (k < word_count)
	{
		j = 0;
		while (s[i] == c)
			i++;
		if (!(tab[k] = (char *)malloc(sizeof(char) *
		(get_word_length(s, c, i) + 1))))
			return (NULL);
		while (s[i] && s[i] != c)
			tab[k][j++] = s[i++];
		tab[k++][j] = '\0';
	}
	tab[k] = 0;
	return (tab);
}
