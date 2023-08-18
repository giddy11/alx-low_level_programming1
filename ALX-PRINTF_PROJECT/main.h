#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);


/* C standard library header files */
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>


/* function prototypes */
int print_char(va_list arg);





int _printf(const char *format, ...);
int (*find_format_handlers(const char *format))(va_list);


typedef struct {
    const char *format_char;
    int (*handler_func)(va_list);
} format_handler;





#endif /*MAIN_H*/