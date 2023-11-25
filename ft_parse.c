#include "ft_printf.h"
int ft_parse(const char *intput, va_list args)
{
    int count;

    count = 0;
    while (*intput)
    {
        if (*intput == '%')
        {
            intput++;
            if (*intput == 'c')
                count += ft_putchar(va_arg(args, int));
            else if (*intput == 's')
                count += ft_putstr(va_arg(args, char *));
            else if (*intput == 'd' || *intput == 'i')
                count += ft_putnbr(va_arg(args, int) , 0);
            else if (*intput == 'x')
                count += ft_puthex(va_arg(args, int) , 0);
            else if (*intput == 'X')
                count += ft_puthexup(va_arg(args, int) , 0);
            else if (*intput == 'p')
                count += ft_putptr(va_arg(args, void *) , 0);
            else if (*intput == 'u')
                count += ft_putuns(va_arg(args, unsigned int) , 0);
            else if (*intput == '%')
                count += ft_putchar('%');
        }
        else if (*intput == '\0')
        {
            va_end(args);
            printf("Error: ft_printf: input is NULL\n");
            return (-1);
        }
        else
            count += ft_putchar(*intput);
        intput++;
    }
    return (count);
}