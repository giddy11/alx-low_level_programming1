#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
// #include <ctype.h>

#define BUF_CAPACITY 1024
#define BUF_CLEARING -1

#define EMPTY_STRING "(null)"

#define HEX_LOWERCASE	1
#define SIGN_FLAG       2


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

#define DEFAULT_PARAMETERS {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}


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

/*Overall, this function converts a number into a string representation in the specified base, considering sign and case options. It builds the string in reverse order and returns a pointer to the beginning of the string.*/
char *convert(long int num, int base, int flags, Params *params)
{
	static char *array;
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;
	(void)params;

	if (!(flags & SIGN_FLAG) && num < 0)
	{
		n = -num;
		sign = '-';

	}

    if (flags & HEX_LOWERCASE)
        array = "0123456789abcdef";
    else
        array = "0123456789ABCDEF";

	ptr = &buffer[sizeof(buffer) - 1];
	*ptr = '\0';

    for (; n != 0; n /= base)
        *(--ptr) = array[n % base];

	if (sign)
		*--ptr = sign;
	return (ptr);
}

int print_int(va_list i, Params *params)
{
    int n = va_arg(i, int);
    int count = 0, divisor = 1;
    (void)params;

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

int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}

int print_string(va_list str, Params *params)
{
    int i, r_value = 0;
    char *strn;
    (void)params;

    strn = va_arg(str, char*);
    if (strn == NULL)
        strn = EMPTY_STRING;

    for (i = 0; strn[i]; i++, r_value++)
    {
        _putchar(strn[i]);
    }

    return r_value;
}

int print_S(va_list arg, Params *params)
{
	char *str = va_arg(arg, char *);
	char *hex;
	int r_value = 0;

	if ((int)(!str))
		return (_puts(EMPTY_STRING));
	for (; *str; str++)
	{
		if ((*str > 0 && *str < 32) || *str >= 127)
		{
			r_value += _putchar('\\');
			r_value += _putchar('x');
			hex = convert(*str, 16, 0, params);
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



int print_percent(va_list arg, Params *params)
{
	(void)arg;
    (void)params;
	return (_putchar('%'));
}

int print_char(va_list arg, Params *params)
{
	char pad_char = ' ';
	unsigned int pad = 1, r_value = 0, ch = va_arg(arg, int);

	if (params->minusFlag)
		r_value += _putchar(ch);

	while (pad++ < params->width)
		r_value += _putchar(pad_char);

	if (!params->minusFlag)
		r_value += _putchar(ch);

	return (r_value);
}

int (*find_format_handlers(char *format))(va_list arg, Params *Params)
{
    unsigned int i = 0;
    format_handler find_func[] = {
        {"c", print_char},
        {"d", print_int},
        {"i", print_int},
        {"s", print_string},
        {"S", print_S},
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

        if (find_format_handlers(ptr))
        {
            r_value += execute_func(ptr, args, &params);
        }
        else
            r_value += print_from_to(specifier_start, ptr, params.lModifier || 
                                        params.hModifier ? ptr - 1 : 0);
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

    //  _printf("%S\n", "Best\nSchool");
      _printf("%S\n", "Best\nSchool");

	return (0);
}