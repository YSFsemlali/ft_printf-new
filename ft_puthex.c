/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:41:34 by ysemlali          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/11/26 16:59:34 by ysemlali         ###   ########.fr       */
=======
/*   Updated: 2023/11/26 12:02:00 by ysemlali         ###   ########.fr       */
>>>>>>> 5d4b98d3049b04f89f8de8980330e18d8d3307d6
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nb, int count)
{
	if (nb >= 16)
<<<<<<< HEAD
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
=======
		count = ft_puthex(nb / 16, count + 1);
	if (nb % 16 < 10)
		ft_putchar(nb % 16 + '0');
	else
		ft_putchar(nb % 16 - 10 + 'a');
	return (count + 1);
>>>>>>> 5d4b98d3049b04f89f8de8980330e18d8d3307d6
}
