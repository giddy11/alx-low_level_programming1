// #include "main.h"

// typedef struct {
//     char specifier;
//     void (*handler)(va_list);
// } FormatHandler;

// // Handler functions for different format specifiers
// void handle_char(va_list args)
// {
//     my_putchar(va_arg(args, int));
// }

// // Handler functions for different format specifiers
// void handle_int(va_list args)
// {
//     int num = va_arg(args, int);
// }

// void handle_string(va_list args)
// {
//     char *str = va_arg(args, char*);
// }

// // Array of FormatHandlers
// FormatHandler handlers[] = {
//     {'c', handle_char},
//     {'d', handle_int},
//     {'s', handle_string},


//     // Add more handlers for other format specifiers as needed
// };

// int my_printf(const char *format, ...)
// {
//     unsigned i, j, r_value = 0;
//     va_list my_list;
//     va_start(my_list, format);

//     for (i = 0; i < format[i] != 0; i++)
//     {
//         if (format[i] != '%')
//         {
//             my_putchar(format[i]);
//         }
//         else
//         {
//             i++; // Move past the %
//             for (j = 0; j < sizeof(handlers) / sizeof(handlers[0]); j++)
//             {
//                 if (format[i] == handlers[j].specifier)
//                 {
//                     handlers[j].handler(my_list);
//                     break;
//                 }
//             }
//         }
//         r_value++;
//     }

//     // va_end(my_list);
//     return r_value;
// }