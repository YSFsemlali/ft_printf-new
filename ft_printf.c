/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:41:25 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/26 12:03:28 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *intput, ...)
{
	va_list	args;
	int		count;

	if (intput[1] == '\0' && intput[0] == '%')
		return (0);
	if (intput[0] == '\0')
		return (0);
	va_start(args, intput);
	count = ft_parse(intput, args);
	va_end(args);
	return (count);
}
int	main(void)
{
	// char *str = NULL;
	// int o = ft_printf("Hello %s, %i, %d, %i, %p, %u, %c, %%, %d\n", "World",
	// INT_MAX, INT_MAX, INT_MAX, str, UINT_MAX+1, 'c', 42);
	// int j = ft_printf("%p", NULL);
	// int j = printf("%");
	// int j = printf("%");
	// ft_printf("\n%d", j);

	// ft_printf(NULL);
	// int i = ft_printf(NULL); //expected -1
	// int i = ft_printf("%p", NULL); //expected 0x0;
	// printf("\n%d", i);
	// ft_printf("\n%d", g);
	// return (0);
	int o = ft_printf("%%%");
	printf("  %d\n", o);
	ft_printf("\n");
}