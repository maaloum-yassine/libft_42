/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 03:26:01 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/09/19 07:27:20 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strrchr(const char *s, int c)
{
	size_t	lenght;

	lenght = ft_strlen(s);
	while (lenght > 0)
	{
		if (((char *)s)[lenght] == (char)c)
		{
			return ((char *)s + lenght);
		}
		lenght--;
	}
	if (((char *)s)[lenght] == (char)c)
	{
		return (((char *)s) + lenght);
	}
	return (NULL);
}
