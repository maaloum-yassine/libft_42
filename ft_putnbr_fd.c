/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymaaloum <ymaaloum@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 05:28:32 by ymaaloum          #+#    #+#             */
/*   Updated: 2022/10/25 06:33:38 by ymaaloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	nombre;

	nombre = n;
	if (nombre < 0)
	{
		ft_putchar_fd('-', fd);
		nombre *= -1;
	}
	if (nombre >= 0 && nombre <= 9)
	{
		ft_putchar_fd(nombre + 48, fd);
	}
	else
	{
		ft_putnbr_fd(nombre / 10, fd);
		ft_putnbr_fd(nombre % 10, fd);
	}
}
