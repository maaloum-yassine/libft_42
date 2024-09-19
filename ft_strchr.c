/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 00:16:20 by ymaaloum          #+#    #+#             */
/*   Updated: 2022/10/20 03:25:38 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == ((char)c))
		{
			return ((char *)s);
		}
		s++;
	}
	if (((char)c) == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
