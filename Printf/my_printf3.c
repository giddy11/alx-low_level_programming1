#include "main.h"

int print_format(char specifier, va_list ap)
{
	int count = 0;

	switch (specifier)
	{
	case 'c':{
		char c = va_arg(ap, int);
        count += my_putchar(c);
		break;
	}
	
	default:
		break;
	}
	
	return count;
}

int _printf(const char *format, ...)
{
    unsigned i, r_value = 0;
    va_list my_list;
    va_start(my_list, format);

    for (i = 0; format[i] != 0; i++)
    {
		if (format[i] == '%')
        {
            r_value--; 
			r_value += print_format(format[i+1], my_list);
            i++;

        }
		else
			r_value += my_putchar(format[i]);
    }

	va_end(my_list);
    return r_value;
}

/*#include <stdio.h>
#include <stdarg.h>

int my_putchar(char c) {
    // Replace this with your actual output mechanism
    putchar(c);
    return 1;
}

int print_format(char specifier, va_list ap) {
    int count = 0;

    switch (specifier) {
        case 'c': {
            char c = va_arg(ap, int);
            count += my_putchar(c);
            break;
        }
    
        default:
            break;
    }

    return count;
}

int _printf(const char *format, ...) {
    unsigned i, r_value = 0;
    va_list my_list;
    va_start(my_list, format);

    for (i = 0; format[i] != '\0'; i++, r_value++) {
        if (format[i] == '%') {
            r_value--; // Decrement before calling print_format
            r_value += print_format(format[++i], my_list);
        } else {
            r_value += my_putchar(format[i]);
        }
    }

    va_end(my_list);
    return r_value;
}

int main() {
    _printf("Hello, %c World!\n", 'C');
    return 0;
}
*/


/*if (format[i] != '%')
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
		}*/
















/*int my_printf(const char *format, ...)
{
    unsigned h = 0, r_value = 0;
	va_list args;
	va_start(args, format);

	for ( ; format[h] != '\0' ; h++)
	{
		if (format[h] != '%')
		{
			my_putchar(format[h]);
		}
		else if (format[h+1] == 'c')
		{
			my_putchar(va_arg(args, int));
			h++;
		}
		else if (format[h+1] == 's')
		{
			int r_val = put_string(va_arg(args, char *));
			h++;
			r_value += (r_val - 1);
		}
		else if (format[h+1] == '%')
		{
			my_putchar('%');
			h++;
		}
		else if ((format[h+1] == 'd') || (format[h+1] == 'i'))
		{
			print_int(va_arg(args, int));
			h++;
		}
		r_value += 1;
	}
	return (r_value);

}*/