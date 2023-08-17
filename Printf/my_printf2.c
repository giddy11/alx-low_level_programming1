#include "main.h"

int _printf(const char *format, ...)
{
    unsigned i, r_value = 0;
    va_list my_list;
    va_start(my_list, format);

    for (i = 0; format[i] != 0; i++)
    {
        if (format[i] != '%')
        {
            my_putchar(format[i]);
        }
        else if (format[i+1] == 'c')
        {
            char c = va_arg(my_list, int);
            my_putchar(c);
            i++;
        }
        else if (format[i+1] == 's')
        {
            // put_string(va_arg(my_list, char*));
            int r_val = put_string(va_arg(my_list, char*));
            i++;
            r_value += r_val;
            // r_value += (r_val - 1);
        }
        else if (format[i+1] == '%')
		{
			my_putchar('%'); 
			i++;
		}
        else if ((format[i+1] == 'd') || (format[i+1] == 'i'))
		{
			print_int(va_arg(my_list, int));
			// print_int1(va_arg(my_list, int));
			i++;
		}
        
        r_value++;
    }

    return r_value;
}

// /*int my_printf(const char *format, ...)
// {
//     unsigned h = 0, r_value = 0;
// 	va_list args;
// 	va_start(args, format);

// 	for ( ; format[h] != '\0' ; h++)
// 	{
// 		if (format[h] != '%')
// 		{
// 			my_putchar(format[h]);
// 		}
// 		else if (format[h+1] == 'c')
// 		{
// 			my_putchar(va_arg(args, int));
// 			h++;
// 		}
// 		else if (format[h+1] == 's')
// 		{
// 			int r_val = put_string(va_arg(args, char *));
// 			h++;
// 			r_value += (r_val - 1);
// 		}
// 		else if (format[h+1] == '%')
// 		{
// 			my_putchar('%');
// 			h++;
// 		}
// 		else if ((format[h+1] == 'd') || (format[h+1] == 'i'))
// 		{
// 			print_int(va_arg(args, int));
// 			h++;
// 		}
// 		r_value += 1;
// 	}
// 	return (r_value);

// }*/