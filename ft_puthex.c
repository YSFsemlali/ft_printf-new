/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:41:34 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/26 17:13:23 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nb, int count)
{
	if (nb >= 16)
		count = ft_puthex(nb / 16, count);
	if (nb % 16 < 10)
	{
		ft_putchar(nb % 16 + '0');
		count++;
	}
	else
	{
		ft_putchar(nb % 16 - 10 + 'a');
		count++;
	}
	return (count);
}
