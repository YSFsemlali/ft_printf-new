/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:03:26 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/25 14:04:58 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthexup(unsigned int nb, int count)
{
    if (nb >= 16)
        count = ft_puthexup(nb / 16, count + 1);
    if (nb % 16 < 10)
        ft_putchar(nb % 16 + '0');
    else
        ft_putchar(nb % 16 - 10 + 'A');
    return count + 1;
}