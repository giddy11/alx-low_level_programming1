#include "main.h"

int print_char(va_list c)
{
	unsigned char my_char;

	my_char = va_arg(c, int);
	_putchar(my_char);
    
	return (1);
}