#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
    int flag, c, w;

    flag = 0;
    w = 0;

    for (c = 0; s[c] != '\0'; c++)
    {
        if (s[c] == ' ')
            flag = 0;
        else if (flag == 0)
        {
            flag = 1;
            w++;
        }
    }

    return w;
}

/**
 * allocate_and_copy - allocate memory and copy a substring
 * @start: start position
 * @end: end position
 * @str: source string
 *
 * Return: pointer to the new substring
 */
char *allocate_and_copy(int start, int end, char *str)
{
    int len = end - start;
    char *substr = (char *)malloc(sizeof(char) * (len + 1));

    if (substr == NULL)
        return NULL;

    for (int i = 0; i < len; i++)
    {
        substr[i] = str[start + i];
    }
    substr[len] = '\0';

    return substr;
}

/**
 * free_matrix - free memory allocated for a matrix of strings
 * @matrix: pointer to the matrix
 */
void free_matrix(char **matrix)
{
    for (int i = 0; matrix[i] != NULL; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
    char **matrix, *tmp;
    int i, k = 0, len = 0, words, c = 0, start, end;

    while (*(str + len))
        len++;
    words = count_word(str);
    if (words == 0)
        return NULL;

    matrix = (char **)malloc(sizeof(char *) * (words + 1));
    if (matrix == NULL)
        return NULL;

    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (c)
            {
                end = i;
                tmp = allocate_and_copy(start, end, str);
                if (tmp == NULL)
                {
                    free_matrix(matrix);
                    return NULL;
                }
                matrix[k] = tmp;
                k++;
                c = 0;
            }
        }
        else if (c++ == 0)
            start = i;
    }

    matrix[k] = NULL;

    return matrix;
}


/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow(" ALX Sch #cis");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}