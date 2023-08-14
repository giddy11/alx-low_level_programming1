#include "main.h"

int my_printf(const char *format, ...)
{
    unsigned i, r_value = 0;
    va_list my_list;
    va_start(my_list, format);

    for (i = 0; i < format[i] != 0; i++)
    {
        if (format[i] != '%')
        {
            my_putchar(format[i]);
        }
        else if (format[i+1] == 'c')
        {
            my_putchar(va_arg(my_list, int));
            i++;
        }
        r_value++;
    }

    return r_value;
}