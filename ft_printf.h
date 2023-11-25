/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:41:28 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/25 19:57:06 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int  ft_printf(const char *input, ...);
int ft_parse(const char *input, va_list args);
int ft_strlen(const char *str);
int ft_putchar(char c);
int ft_putstr(char *str);
int ft_putnbr(int nb , int count);
int ft_puthex(unsigned int nb, int count);
int ft_puthexup(unsigned int nb, int count);
int ft_putptr(void *ptr, int count);
int ft_putuns(unsigned int nb, int count);



#endif
