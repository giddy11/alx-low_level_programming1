/*Write a function that produces output according to a format specifier 'c' enhancement*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

#define BUF_CAPACITY 1024
#define BUF_CLEARING -1


typedef struct
{
	unsigned int plusFlag       : 1;
	unsigned int spaceFlag      : 1;
	unsigned int hashtagFlag    : 1;
	unsigned int zeroFlag       : 1;
	unsigned int minusFlag      : 1;

	unsigned int width;
	unsigned int precision;

	unsigned int hModifier     : 1;
	unsigned int lModifier     : 1;
} Params;

#define DEFAULT_PARAMETERS {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}


typedef struct
{
	char *format_char;
	int (*handler_func)(va_list arg);

} format_handler;

int _putchar(int c) 
{
    static int i;
    static char buf[BUF_CAPACITY];

    if (c == BUF_CLEARING || i >= BUF_CAPACITY)
    {
        write(1, buf, i);
        i = 0;
    }

    if (c != BUF_CLEARING)
        buf[i++] = c;

    return 1;
}

int print_char(va_list arg)
{
	int r_value = 0, ch = va_arg(arg, int);

		r_value += _putchar(ch);

	return (r_value);
}

int (*find_format_handlers(char *format))(va_list arg)
{
    unsigned int i = 0;
    format_handler find_func[] = {
        {"c", print_char},
        {NULL, NULL}

    };

    while (find_func[i].format_char)
    {
        if (format[0] == find_func[i].format_char[0])
            return (find_func[i].handler_func);
        i++;
    }

    return NULL;
}

int execute_func(char *s, va_list arg)
{
	int (*print_func)(va_list) = find_format_handlers(s);

	if (print_func)
		return (print_func(arg));

	return (0);
}

int print_from_to(char *start, char *stop)
{
    int r_value = 0;

    for (; start <= stop; start++)
    {
            r_value += _putchar(*start);
    }

    return r_value;
}


int _printf(const char *format, ...)
{
    unsigned int i, r_value = 0;
    char *ptr = (char *)format, *specifier_start;
    int (*format_char)(va_list arg);
    va_list args;

    va_start(args, format);

    if (format == NULL || (format[0] == '%' && !format[1]))
        return (-1);

    for(ptr; *ptr; ptr++)
    {
        if (*ptr != '%')
        {
            r_value += _putchar(*ptr);
            continue;
        }
        specifier_start = ptr;
        ptr++;

        if (find_format_handlers(ptr))
        {
            r_value += execute_func(ptr, args);

        }
        else
            r_value += print_from_to(specifier_start, ptr);

    }
    _putchar(BUF_CLEARING);
    va_end(args);

    return r_value;
}


int main(void)
{

    printf("Hello %c Giddy.\n", 'G');
    _printf("Hello %c Giddy.\n", 'G');


	return (0);
}