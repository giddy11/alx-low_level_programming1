#include <stdio.h>
#include <stdlib.h>

/**
 * calculate_total_chars - gives the total number of characters
 * @ac: argument count
 * @av: double pointer to array of strings passed to argstostr
 * Return: total number of characters
 */
int calculate_total_chars(int ac, char **av)
{
	int i, j, total_chars;

	total_chars = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
			total_chars++;

		total_chars++;
	}
	total_chars++;

	return (total_chars);
}

/**
 * copy_arguments - Copies all arguments to result memory in heap
 * @result: current memory address in heap
 * @ac: argument count
 * @av: double pointer to array of strings passed to argstostr
 */
void copy_arguments(char *result, int ac, char **av)
{
	char *current;
	int i, j;

	current = result;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			*current = av[i][j];
			current++;
		}
		*current = '\n';
		current++;
	}
	*current = 0;
}

/**
 * argstostr - concatenate all arguments of your program
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int total_chars;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_chars = calculate_total_chars(ac, av);

	result = malloc(total_chars * sizeof(char));
	if (result == NULL)
		return (NULL);

	copy_arguments(result, ac, av);

	return (result);
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}