/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 00:15:27 by ymaaloum          #+#    #+#             */
/*   Updated: 2022/10/23 01:21:32 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	n;

	n = size * count;
	ptr = malloc(n);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, n);
	return (ptr);
}
