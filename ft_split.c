/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 07:36:04 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/09/19 07:29:36 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_conunt_word(char const *s, char c)
{
	int	i;
	int	word;
	int	count;

	word = 0;
	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			count++;
			i++;
		}
		if (count != 0)
		{
			word++;
			count = 0;
			i--;
		}
		i++;
	}
	return (word);
}

static	int	ft_lenght_word(char const *s, char c, int pos)
{
	int	j;

	j = pos;
	while (s[j] != c && s[j])
		j++;
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		word;
	int		index;
	int		i;

	word = ft_conunt_word(s, c);
	p = malloc(sizeof(char *) * (word + 1));
	i = 0;
	index = 0;
	if (!p)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (i != ft_lenght_word(s, c, i))
		{
			p[index] = ft_substr(s, i, ft_lenght_word(s, c, i) - i);
			index++;
		}
		i = ft_lenght_word(s, c, i);
	}
	p[index] = NULL;
	return (p);
}
