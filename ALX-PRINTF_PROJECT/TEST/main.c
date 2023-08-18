#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    const char *format_char;
    int (*handler_func)(va_list);
} format_handler;

int _putchar(char c)
{
    return write(1, &c, 1);
}

int print_char(va_list c)
{
	unsigned char my_char;

	my_char = va_arg(c, int);
	_putchar(my_char);
	return (1);
}

int (*find_format_handlers(const char *format))(va_list)
{
    unsigned int i = 0;
    format_handler find_func[] = {
        {"c", print_char},
        {NULL, NULL}

    };

    while (find_func[i].format_char)
    {
        if (format[i] == find_func[i].format_char[0])
            return (find_func[i].handler_func);
        i++;
    }

    return NULL;
}

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
            _putchar(format[i]); // handle non format specifiers
        else if (format[i+1] == '%')
		{
			_putchar('%'); // handle %%
			i++;
		}
        else
        {
            format_char = find_format_handlers(&format[i + 1]);
            if (format_char != NULL)
            {
                r_value += format_char(args); // handle %c, etc
                i += 1;
                // continue;
            }
        }

        r_value++;
    }

    return r_value;
}

int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("hell %c real\n", 'A');
	len2 = printf("hell %c real\n", 'A');

    // _printf("Character:[%c]\n", 'H');
	// printf("Character:[%c]\n", 'H');

	return (0);
}