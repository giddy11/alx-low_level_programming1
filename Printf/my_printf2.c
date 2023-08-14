#include "main.h"

int my_printf(const char *format, ...)
{
    unsigned i, r_value = 0;
    va_list my_list;
    va_start(my_list, format);

    for (i = 0; i < format[i] != 0; i++)
    {
        if (format[i] != '%')              // "I am %c a boy"
        {
            my_putchar(format[i]);
        }
        else if (format[i+1] == 'c')
        {
            my_putchar(va_arg(my_list, int));
            // i++;
        }
        else if (format[i+1] == 's')
        {
            // put_string(va_arg(my_list, char*));
            int r_val = put_string(va_arg(my_list, char*));
            r_value += r_val;
            i++;
        }
        else if (format[i+1] == '%')
		{
			my_putchar('%'); 
			i++;
		}
        r_value++;
    }

    return r_value;
}