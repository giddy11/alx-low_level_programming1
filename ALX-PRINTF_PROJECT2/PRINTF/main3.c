/*Write a function that produces output according to a format specifier d, s and % enhancement*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

#define BUF_CAPACITY 1024
#define BUF_CLEARING -1

#define EMPTY_STRING "(null)"


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

int print_int(va_list i)
{
    int n = va_arg(i, int);
    int count = 0, divisor = 1;

    if (n == INT_MIN)
    {
        char min_str[] = "-2147483648";
        for (int i = 0; min_str[i] != '\0'; i++)
        {
            _putchar(min_str[i]);
            count++;
        }
        return count;
    }
    else if (n < 0)
    {
        _putchar('-');
        count++;
        n = -n;
    }

    if (n == 0)
    {
        _putchar('0');
        count++;
        return count;
    }

    /* Find the divisor that gives the first digit of n */
    while (n / divisor >= 10)
    {
        divisor *= 10;
    }

    /* Print each digit of n */
    while (divisor != 0)
    {
        _putchar('0' + (n / divisor));
        count++;
        n %= divisor;
        divisor /= 10;
    }

    return count;
}

int print_string(va_list str)
{
    int i, r_value = 0;
    char *strn;

    strn = va_arg(str, char*);
    if (strn == NULL)
        strn = EMPTY_STRING;

    for (i = 0; strn[i]; i++, r_value++)
    {
        _putchar(strn[i]);
    }

    return r_value;
}

int print_percent(va_list arg)
{
	(void)arg;
	return (_putchar('%'));
}

int (*find_format_handlers(char *format))(va_list arg)
{
    unsigned int i = 0;
    format_handler find_func[] = {
        {"c", print_char},
        {"d", print_int},
        {"i", print_int},
        {"s", print_string},
        {"%", print_percent},
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
        return -1;

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

     int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);


	return (0);
}