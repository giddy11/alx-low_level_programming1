#include "main.h"

int _printf(const char *format, ...)
{
    unsigned int i, r_value = 0;
    int (*format_char)(va_list);
    va_list args;

    if (format == NULL)
        return (-1);

    va_start(args, format);

    for(i = 0; format[i] != 0; i++)
    {
        if (format[i] != '%')
            _putchar(format[i]);
        else if (format[i+1] == '%') // to print %% 
		{
			_putchar('%');
			i++;
		}
        else
        {
            format_char = find_format_handlers(&format[i + 1]);
            if (format_char != NULL)
            {
                r_value += format_char(args);
                i += 1;
                continue;
            }
        }
        r_value++;
    }
    return r_value;
}