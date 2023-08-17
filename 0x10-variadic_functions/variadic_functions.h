#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/*Functions for character specifiers*/
// void print_char(va_list arg);
// void print_int(va_list arg);
// void print_float(va_list arg);
// void print_string(va_list arg);
void print_all(const char * const format, ...);



/**
  * struct formatting_code - Struct format
  * @sc: The specifiers
  * @handler_func: The function associated
  */
typedef struct formatting_code {
    char *sc;
    void (*handler_func)(va_list arg);
} fc;

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;


#endif
