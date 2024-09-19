/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 03:01:30 by ymaaloum          #+#    #+#             */
/*   Updated: 2022/10/22 04:17:50 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!*needle)
		return (((char *)haystack));
	if (len == 0 || !*haystack)
		return (NULL);
	while (i + ft_strlen(needle) <= len && haystack[i])
	{
		if (ft_strncmp(haystack + i, needle, ft_strlen(needle)) == 0)
		{
			return (((char *)haystack) + i);
		}
		i++;
	}
	return (NULL);
}
