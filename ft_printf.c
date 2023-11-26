/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:41:25 by ysemlali          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/11/26 17:02:02 by ysemlali         ###   ########.fr       */
=======
/*   Updated: 2023/11/26 12:03:28 by ysemlali         ###   ########.fr       */
>>>>>>> 5d4b98d3049b04f89f8de8980330e18d8d3307d6
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *intput, ...)
{
	va_list	args;
	int		count;

<<<<<<< HEAD
	if (!intput)
		return (-1);
	count = 0;
	va_start(args, intput);
	while (*intput)
	{
		if (*intput == '%')
		{
			intput++;
			if (*intput == '\0')
				break ;
			count += handle_format_specifier(*intput, args);
		}
		else
			count += ft_putchar(*intput);
		intput++;
	}
=======
	if (intput[1] == '\0' && intput[0] == '%')
		return (0);
	if (intput[0] == '\0')
		return (0);
	va_start(args, intput);
	count = ft_parse(intput, args);
>>>>>>> 5d4b98d3049b04f89f8de8980330e18d8d3307d6
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
<<<<<<< HEAD
	int o = ft_printf("%x\n", 100000);
	int j = printf("%x\n", 100000);
	ft_printf("%d\n", o);
	printf("%d\n", j);
	// printf("  %d\n", o);
	// char *s = NULL;
	// int i  = ft_printf("hello gsvjsx %");
	// int i  = printf("%q", s );
	// int count = ft_printf("hello %s gsvjsx %r %", "youssef");
=======
	int o = ft_printf("%%%");
	printf("  %d\n", o);
	ft_printf("\n");
>>>>>>> 5d4b98d3049b04f89f8de8980330e18d8d3307d6
}