#include "variadic_functions.h"

/**
 * print_strings - Displays a series of strings, each followed by a newline.
 * @separator: The string used to separate individual strings in the output.
 * @n: The count of strings provided to the function.
 * @...: A variable quantity of strings to be printed.
 * Return: If separator is NULL, no printing occurs; if any individual
 * string is NULL, "nil" is printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
        char *str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

        if (separator != NULL && i < (n-1))
    		printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}