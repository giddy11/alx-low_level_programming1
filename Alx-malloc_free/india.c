#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char **strtow(char *str)
{
	unsigned int i, j, k, ispace = 1, cow = 0, coc = 0;
	char **ptc;
	/*-ALX---School--cisfun--goodbye*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			ispace = 1;
			continue;
		}
		if (ispace == 1)
			cow += 1;
		ispace = 0;
	}
	printf("%d\n", cow);
	cow += 1; /* for NULL at the end of array */
​
	ptc = malloc(sizeof(char*) * cow);
	if (!ptc)
		return (NULL);
​
	for (i = 0, j = 0, ispace = 1; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (ispace == 0)
			{
				coc += 1;
				ptc[j] = malloc(sizeof(char) * coc);
				if (!ptc)
					for (i = 0; i < j; i++)
					{
						free(ptc[i]);
						return (NULL);
					}
				++j;
				coc = 0;
			}	
			ispace = 1;
			continue;
		}
		coc++;
		ispace = 0;
	}
	
	if (ispace == 0)
	{
		coc += 1;
		ptc[j] = malloc(sizeof(char) * coc);
		if (!ptc[j])
			for (i = 0; i < j; i++)
			{
				free(ptc[i]);
				return (NULL);
			}
		++j;
		coc = 0;
	}
​
	for (i = 0, j = 0, k = 0, ispace = 1; str[i] != '\0' ; i++)
	{
		if (str[i] == ' ')
		{
			if (ispace == 0)
			{
				ptc[j][k] = '\0';
				++j;
				k = 0;
			}
			ispace = 1;
			continue;
		}
		ptc[j][k] = str[i];
		k++;
	}​
	if (ispace == 0)
		ptc[j][k] = '\0';
	ptc[j + 1] = NULL;

	return (ptc);
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