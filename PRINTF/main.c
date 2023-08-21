
/*ISSUE!: Refactor code*/

/*HEADER FILES*/

/*Library*/
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

#define BUF_CAPACITY 1024
#define BUF_CLEARING -1



/**/
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

/**/
typedef struct
{
	char *format_char;
	int (*handler_func)(va_list arg);

} format_handler;


/******************************************************************************/
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
/***********************************************************************************/


int (*find_format_handlers(char *format))(va_list arg)
{
    unsigned int i = 0;
    format_handler find_func[] =
    {
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

/*REFACTOR*/
int _printf(const char *format, ...)
{
    unsigned int i, r_value = 0;
    char *ptr = (char *)format, *specifier_start;
    int (*format_char)(va_list arg);
    va_list args;

    va_start(args, format);

    if (format == NULL || (format[0] == '%' && !format[1])) // i am % 
        return (-1);

    for(ptr; *ptr; ptr++)
    {
        if (*ptr != '%')
        {
            r_value += _putchar(*ptr);
            continue;
        }
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

    // printf("Hello\n");
    // _printf("Hello\n");

    printf("% \n");
    _printf("% \n");


	return (0);
}