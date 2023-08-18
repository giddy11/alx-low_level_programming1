#include "main.h"

int (*find_format_handlers(const char *format))(va_list)
{
    unsigned int i = 0;
    format_handler find_func[] = {
        {"c", print_char}

    };

    while (find_func[i].format_char)
    {
        if (format[i] == find_func[i].format_char[0])
            return (find_func[i].handler_func);
        i++;
    }

    return NULL;
}