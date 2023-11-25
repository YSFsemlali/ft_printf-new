/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <ysemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:41:25 by ysemlali          #+#    #+#             */
/*   Updated: 2023/11/25 20:39:40 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *intput, ...)
{
    va_list args;
    va_start (args, intput);
    int count;
    count = ft_parse(intput, args);
    va_end (args);
    return (count);
}
int main(void)
{
    // void *i = NULL;
    // int j = ft_printf("Hello %s, %i, %x, %X, %p, %u, %c, %%, %d\n", "World", 42, 1000, 1000, NULL, 42, 'c', 42);
    // int j = ft_printf("%p", NULL);
    int j = ft_printf("%");
    // int j = printf("%");
    printf("\n%d", j);




    
    // // ft_printf(NULL);
    // // int i = ft_printf(NULL); //expected -1 
    // int i = ft_printf("%p", NULL); //expected 0x0;
    // printf("\n%d", i);
    // // ft_printf("\n%d", g);
    // // return (0);
    // ft_printf("\n");
}