/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:41:21 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/25 12:41:45 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putuns(unsigned int nb, int count)
{
    if (nb >= 10)
        count = ft_putuns(nb / 10, count + 1);
    ft_putchar(nb % 10 + '0');
    return count + 1;
}
