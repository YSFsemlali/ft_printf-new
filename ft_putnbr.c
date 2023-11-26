/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:41:36 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/26 12:02:28 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb, int count)
{
	long	n;

	n = (long)nb;
	count = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		count++;
	}
	if (n >= 10)
	{
		count = ft_putnbr(n / 10, count + 1);
	}
	ft_putchar(n % 10 + '0');
	return (count + 1);
}
