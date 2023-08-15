#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - helper function to count the number of words in a string
 * @str: string to evaluate
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

	return (word_count);
}


/**
 * allocate_and_copy - allocate memory and copy a substring
 * @start_word: start position
 * @end_word: end position
 * @str: source string
 * Return: pointer to the new substring
 */
char *allocate_and_copy(int start_word, int end_word, char *str)
{
	int len, i;
	char *col;

	len = end_word - start_word;
	col = malloc((len + 1) * sizeof(char));

	if (col == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		col[i] = str[start_word + i];
	}
	col[len] = 0;

	return (col);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **row, *ptr;
	int i, j, row_index, str_len, words, found_word, start_word, end_word, len;

	row_index = str_len = found_word = 0;

	while (str[str_len])
		str_len++;

	words = count_word(str);

	if (words == 0)
		return (NULL);

	row = malloc(sizeof(char *) * (words + 1));
	if (row == NULL)
		return (NULL);

	for (i = 0; i <= str_len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (found_word)
			{
				end_word = i;
                len = end_word - start_word;
                
                ptr = malloc((len + 1) * sizeof(char));
				if (ptr == NULL)
					return (NULL);

                for (j = 0; j < len; j++)
                {
                    ptr[j] = str[start_word + j];
                }
                ptr[len] = 0;

				row[row_index] = ptr;
				row_index++;
				found_word = 0;
			}
		}
		else if (found_word++ == 0)
			start_word = i;
	}

	row[row_index] = NULL;

	return (row);
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

    tab = strtow(" ALX School #cisfun  ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}