/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 04:20:14 by ymaaloum          #+#    #+#             */
/*   Updated: 2022/10/24 07:29:36 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenght(long long n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		n *= (-1);
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long long	nombre;
	int			lenght;
	char		*p;
	int			sizealloce;

	nombre = (long long)n;
	lenght = ft_lenght(nombre);
	sizealloce = lenght + 1;
	p = malloc(sizealloce);
	if (!p)
		return (0);
	if (nombre < 0)
	{
		p[0] = '-';
		nombre *= -1;
	}
	while (nombre > 9)
	{
		p[--lenght] = nombre % 10 + '0';
		nombre = nombre / 10;
	}
	p[--lenght] = nombre + 48;
	p[sizealloce - 1] = '\0';
	return (p);
}
