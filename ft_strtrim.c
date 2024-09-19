/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:47:33 by ymaaloum          #+#    #+#             */
/*   Updated: 2024/09/19 07:27:39 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*tmp;
	int		i;
	size_t	len;

	if (!s1 || !set)
	{
		return (NULL);
	}
	len = ft_strlen(s1);
	i = 0;
	tmp = (char *)set;
	while (s1[i] && ft_strchr(tmp, s1[i]) != NULL )
	{
		tmp = (char *)set;
		i++;
	}
	tmp = (char *)set;
	while (len > 0 && ft_strchr(tmp, s1[len -1]) != NULL)
	{
		tmp = (char *)set;
		len --;
	}
	str = ft_substr(s1, i, len - i);
	return (str);
}
