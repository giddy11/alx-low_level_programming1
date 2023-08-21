#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char *format_char;
    int (*handler_func)(va_list arg);
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

// int print_int(va_list num)
// {
//     int n, p;

//     n = va_arg(num, int);

// 	if (n < 0)
// 	{
// 		putchar('-');
// 		n = -n;
// 	}

//     if (n == 0)
//         return 0;

//     p = n / 10;

//     int count = print_int(n);
//     // count += my_putchar(num % 10 + '0');
//     return count +  _putchar(n % 10 + '0');


//     // return count;
// }

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



int put_string(va_list str)
{
    int i, r_value = 0;
    char *strn;

    strn = va_arg(str, char*);
    if (strn == NULL)
        strn = "(null)";

    for (i = 0; strn[i]; i++, r_value++)
    {
        _putchar(strn[i]);
    }
    // my_putchar('\n');

    return r_value;
}

int print_bin(va_list b)
{
	int n = va_arg(b, int);
    int count = 0, divisor = 1;

    if (n != 0)
    {
        /* Find the divisor that gives the first digit of n */
        while (n / divisor >= 2)
        {
            divisor *= 2;
        }

        /* Print each digit of n */
        while (divisor != 0)
        {
            _putchar('0' + (n / divisor));
            count++;
            n %= divisor;
            divisor /= 2;
        }
    }
    else
    {
        _putchar('0');
        return (1);
    }

    return count;
}

int (*find_format_handlers(const char *format))(va_list arg)
{
    unsigned int i = 0;
    format_handler find_func[] = {
        {"s", put_string},
        {"c", print_char},
        {"d", print_int},
        {"i", print_int},
        {"b", print_bin},
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


int _printf(const char *format, ...)
{
    unsigned int i, r_value = 0;
    int (*format_char)(va_list arg);
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
                continue;
            }
            else
            {
                _putchar('%');
                // return -1;
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
	int std;
	int ours;
	unsigned int ui; 
	void *addr;
	int n1;
    int n2;
    int num1;
    int num2;

	n1 = 0;
    n2 = 0;
    num1 = 0;
    num2 = 0;

    // len = _printf("Let's try to printf a simple sentence.\n");
	// len2 = printf("Let's try to printf a simple sentence.\n");
	// ui = (unsigned int)INT_MAX + 1024;
	// addr = (void *)0x7ffe637541f0;


    _printf("%b\n", -5);




    // _printf("okay %% k.\n");
    // printf("okay %% k.\n");

	




    // _printf("Unknown:[%r]\n");
    // printf("Unknown:[%r]\n");


    // _printf("Character:[%c]\n", 'H');
	// printf("Character:[%c]\n", 'H');

	return (0);
}