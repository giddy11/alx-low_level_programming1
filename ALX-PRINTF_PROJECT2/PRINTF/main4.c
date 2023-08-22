/*Write a function that produces output according to a format specifier d, s and % enhancement*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

#define BUF_CAPACITY 1024
#define BUF_CLEARING -1

#define EMPTY_STRING "(null)"

#define HEX_LOWERCASE	1
#define SIGN_FLAG       2

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

char *convert(long int num, int base)
{
	static char *array;
	static char buffer[20];
	char *ptr;
	unsigned long n = num;

    array = "0123456789ABCDEF";

	ptr = &buffer[sizeof(buffer) - 1];
	*ptr = '\0';

    for (; n != 0; n /= base)
        *(--ptr) = array[n % base];

	return (ptr);
}

int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}

int print_S(va_list arg)
{
	char *str = va_arg(arg, char *);
	char *hex;
	int r_value = 0;

	if ((int)(!str))
		return (_puts(EMPTY_STRING));
	for (; *str; str++)
	{
		if (*str >= 127 || (*str > 0 && *str < 32))
		{
			r_value += _putchar('\\');
			r_value += _putchar('x');
			hex = convert(*str, 16);
			if (!hex[1])
				r_value += _putchar('0');
			r_value += _puts(hex);
		}
		else
		{
			r_value += _putchar(*str);
		}
	}
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
        {"S", print_S},
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
    // _putchar(BUF_CLEARING);
    va_end(args);

    return r_value;
}


int main(void)
{
    // _printf("%S\n", "Best\nSchool");
    _printf("Besttehsty\n");
    _printf("leavemealon\n");




    // _printf("%c", 9);
    // printf("%c", 'i');

    
    


    // printf("He %i Giddy.\n", 0x0b);
    // _printf("He %i Giddy.\n\n", 0x0b);

    // printf("He %d Giddy.\n", 0x0b);
    // _printf("He %d Giddy.\n", 0x0b);


	return (0);
}