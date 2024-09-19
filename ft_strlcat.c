/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 06:20:39 by ymaaloum          #+#    #+#             */
/*   Updated: 2022/10/25 09:23:04 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	lengthdst;
	size_t	j;

	if (dstsize >= ft_strlen(dst) + 1)
	{
		j = ft_strlen(dst);
		lengthdst = ft_strlen(dst);
		i = 0;
		while (j < dstsize - 1 && src[i] != '\0')
		{
			dst[j++] = src[i++];
		}
		dst[j] = '\0';
		return (ft_strlen(src) + lengthdst);
	}
	return (ft_strlen(src) + dstsize);
}
