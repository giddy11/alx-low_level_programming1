#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *str)
{
    int is_word, i, word_count;

    is_word = 0;
    word_count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            is_word = 0;
        else if (is_word == 0)
        {
            is_word = 1;
            word_count++;
        }
    }

    return word_count;
}

/**
 * allocate_and_copy - allocate memory and copy a substring
 * @start_word: start position
 * @end_word: end position
 * @str: source string
 *
 * Return: pointer to the new substring
 */
char *allocate_and_copy(int start_word, int end_word, char *str)
{
    int len = end_word - start_word;
    char *col = (char *)malloc(sizeof(char) * (len + 1));

    if (col == NULL)
        return NULL;

    for (int i = 0; i < len; i++)
    {
        col[i] = str[start_word + i];
    }
    col[len] = '\0';

    return col;
}

/**
 * free_row - free memory allocated for a row of strings
 * @row: pointer to the row
 */
void free_row(char **row)
{
    for (int i = 0; row[i] != NULL; i++)
    {
        free(row[i]);
    }
    free(row);
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
    char **row, *ptr;
    int i, row_index = 0, str_len = 0, words, found_word = 0, start_word, end_word;

    while (str[str_len])
        str_len++;

    words = count_word(str);

    if (words == 0)
        return NULL;

    row = malloc((words + 1) * sizeof(char *));

    if (row == NULL)
        return NULL;

    for (i = 0; i <= str_len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (found_word)
            {
                end_word = i;
                ptr = allocate_and_copy(start_word, end_word, str);
                if (ptr == NULL)
                {
                    free_row(row);
                    return NULL;
                }
                row[row_index] = ptr;
                row_index++;
                found_word = 0;
            }
        }
        else if (found_word++ == 0)
            start_word = i;
    }

    row[row_index] = NULL;

    return row;
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

    tab = strtow("ALX  Sch  #cis  ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);

    // free_row(tab);
    return (0);
}