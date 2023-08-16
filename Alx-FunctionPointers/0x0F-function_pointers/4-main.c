#include <stdio.h>
#include <stdlib.h>

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b)
{
    return (a + b);
}

int op_sub(int a, int b)
{
    return (a - b);
}

int op_mul(int a, int b)
{
    return a * b;
}

int op_div(int a, int b)
{
    return a / b;
}

int op_mod(int a, int b)
{
    return a % b;
}

int (*get_op_func(char *s))(int, int)
{

    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (ops[i].op != NULL && *ops[i].op != *s)
    {
        i++;
    }
    return ops[i].f;
    
}





int main()
{
    int num1, num2, result;
	char *op;

    num1 = 4;
	op = "/";
	num2 = 0;

    if (get_op_func(op) == NULL)
    {
        printf("Error\n");
		exit(99);
    }

    if((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
    {
        printf("Error\n");
		exit(100);
    }

    
    result = get_op_func(op)(num1, num2);

    printf("%d\n", result);

    return (0);
}