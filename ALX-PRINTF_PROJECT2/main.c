#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
// #include <ctype.h>

#define BUF_CAPACITY 1024
#define BUF_CLEARING -1

#define EMPTY_STRING "(null)"


typedef struct
{
	unsigned int isUnsigned     : 1;
	unsigned int plusFlag       : 1;
	unsigned int spaceFlag      : 1;
	unsigned int hashtagFlag    : 1;
	unsigned int zeroFlag       : 1;
	unsigned int minusFlag      : 1;

	unsigned int width;
	unsigned int precision;

	unsigned int hModifier     : 1;
	unsigned int lModifier     : 1;
} Params; // params_t

#define DEFAULT_PARAMETERS {0, 0, 0, 0, 0, 0, 0, 0, 0, 0} // INITIAL_PA


typedef struct specifier
{
	char *format_char;
	int (*handler_func)(va_list arg, Params *); //params_t

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

int print_char(va_list arg, Params *params)
{
	char pad_char = ' ';
	unsigned int pad = 1, r_value = 0, ch = va_arg(arg, int);

	if (params->minusFlag)
		r_value += _putchar(ch);

	while (pad++ < params->width)
		r_value += _putchar(pad_char);

	if (params->minusFlag != NULL)
		r_value += _putchar(ch);

	return (r_value);
}

int (*find_format_handlers(char *format))(va_list arg, Params *Params)
{
    unsigned int i = 0;
    format_handler find_func[] = {
        {"c", print_char},
        // {"c", print_char},
        // {"d", print_int},
        // {"i", print_int},
        // {"b", print_bin},
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

int _isdigit(int c) 
{
    return (c >= '0' && c <= '9');
}

int execute_func(char *s, va_list arg, Params *params)
{
	int (*print_func)(va_list, Params*) = find_format_handlers(s);

	if (print_func)
		return (print_func(arg, params));

	return (0);
}

int print_from_to(char *start, char *stop, char *except)
{
    int r_value = 0;

    for (; start <= stop; start++)
    {
        if (start != except)
            r_value += _putchar(*start);
    }

    return r_value;
}


int get_modifier(char *s, Params *params)
{
    int modifier_set = 0;

    switch (*s) {
        case 'h':
            modifier_set = params->hModifier = 1;
            break;

        case 'l':
            modifier_set = params->lModifier = 1;
            break;
    }

    return modifier_set;
}


char *get_precision(char *ptr, Params *params, va_list arg)
{
	int precision = 0;

	if (*ptr != '.')
		return (ptr);
	ptr++;

	if (*ptr == '*')
	{
		precision = va_arg(arg, int);
		ptr++;
	}
	else
	{
		while (_isdigit(*ptr))
			precision = precision * 10 + (*ptr++ - '0');
	}
	params->precision = precision;
	return (ptr);
}


char *get_width(char *s, Params *params, va_list ap)
{
    int width = 0;

    if (*s == '*') 
    {
        width = va_arg(ap, int);
        s++;
    }
    else
    {
        while (_isdigit(*s))
        {
            width = width * 10 + (*s - '0');
            s++;
        }
    }

    params->width = width;
    return s;
}


int get_flag(char *s, Params *params) 
{
    int i = 0;

    switch (*s) 
    {
        case '+':
            i = params->plusFlag = 1;
            break;
        case ' ':
            i = params->spaceFlag = 1;
            break;
        case '#':
            i = params->hashtagFlag = 1;
            break;
        case '-':
            i = params->minusFlag = 1;
            break;
        case '0':
            i = params->zeroFlag = 1;
            break;
    }

    return i;
}


void initialise_params(Params *params, va_list arg)
{
    *params = (Params)
    {
        .isUnsigned = 0,
        .plusFlag = 0,
        .spaceFlag = 0,
        .hashtagFlag = 0,
        .zeroFlag = 0,
        .minusFlag = 0,
        .width = 0,
        .precision = UINT_MAX,
        .hModifier = 0,
        .lModifier = 0
    };

    (void)arg;
}


int _printf(const char *format, ...)
{
    unsigned int i, r_value = 0;
    char *ptr = (char *)format, *specifier_start;
    int (*format_char)(va_list arg);
    va_list args;
    Params params = DEFAULT_PARAMETERS;

    va_start(args, format);

    if (format == NULL || (format[0] == '%' && !format[1]))
        return (-1);

    for(ptr; *ptr; ptr++)
    {
        initialise_params(&params, args);
        if (*ptr != '%')
        {
            r_value += _putchar(*ptr);
            continue;
        }
        specifier_start = ptr;
        ptr++;

        while(get_flag(ptr, &params))
        {
            ptr++;
        }

        ptr = get_width(ptr, &params, args);
        ptr = get_precision(ptr, &params, args);

        if (get_modifier(ptr, &params))
			ptr++;

        if (find_format_handlers(ptr) != NULL)
        {
            r_value += print_from_to(specifier_start, ptr, params.lModifier || 
                                        params.hModifier ? ptr - 1 : 0);
        }
        else
            r_value += execute_func(ptr, args, &params);
    }
    _putchar(BUF_CLEARING);
    va_end(args);

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

    printf("Hello\n");
    _printf("Hello\n");


	return (0);
}