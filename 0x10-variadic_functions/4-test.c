#include "variadic_functions.h"

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}


void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	fc functions[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format [i])
	{
		j = 0;

		while (j < 4 && (format[i] != functions[j].sc[0]))	//c|c != func(c,i,f,s)
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			functions[j].handler_func(args);
			separator = ", ";
		}
        
		i++;
		
	}

	printf("\n");

	va_end(args);
}

int main(void)
{

    // print_all("ceisx", 'C', 3, "stSchool", "Hello");
    print_all("cc", 'b', 'p');

    return (0);
}