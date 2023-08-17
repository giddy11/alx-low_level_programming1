#include "printfP.h"

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
    unsigned int i = 0, r_value = 0;
    int (*format_char)(va_list);
    va_list args;

    if (format == NULL)
        return (-1);

    va_start(args, format);

    for(; format[i] != 0; i++)
    {
        if (format[i] != '%')
            _putchar(format[i]);

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

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	// ui = (unsigned int)INT_MAX + 1024;
	// addr = (void *)0x7ffe637541f0;

	// _printf("Length:[%d, %i]\n", len, len);
	// printf("Length:[%d, %i]\n", len2, len2);


	// _printf("Negative:[%d]\n", -762534);
	// printf("Negative:[%d]\n", -762534);


	// _printf("Unsigned:[%u]\n", ui);
	// printf("Unsigned:[%u]\n", ui);


	// _printf("Unsigned octal:[%o]\n", ui);
	// printf("Unsigned octal:[%o]\n", ui);


	// _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	// printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);


	// _printf("Character:[%c]\n", 'H');
	// printf("Character:[%c]\n", 'H');



	// _printf("String:[%s]\n", "I am a string !");
	// printf("String:[%s]\n", "I am a string !");


	// _printf("Address:[%p]\n", addr);
	// printf("Address:[%p]\n", addr);


	// len = _printf("Percent:[%%]\n");
	// len2 = printf("Percent:[%%]\n");

	// _printf("Len:[%d]\n", len);
	// printf("Len:[%d]\n", len2);


	// _printf("Unknown:[%r]\n");
	// printf("Unknown:[%r]\n");


	return (0);
}