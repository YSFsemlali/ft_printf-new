/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 12:01:33 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/26 12:01:34 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(const char *input, va_list args)
{
	int	count;

	count = 0;
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			count += handle_format_specifier(*input, args);
		}
		else
			count += ft_putchar(*input);
		input++;
	}
	return (count);
}
