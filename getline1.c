#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * tokenize - Entry point
 * Description: tokenizes string
 * @s: string
 * @c: seperator
 * Return: num of tokens
 */
int tokenize(char *s, char c)
{
	int i, num = 1;

	for (i = 0; s[i]; i++)
	{

		if (s[i] == c)
		{
			num++;
			s[i] = '\0';
		}
	}
	return (num);
}

char *_strtok(char *str, const char *delim)
{
    int i;
    char *s;

    if (str == NULL)
        return (NULL);

    for (i = 0; str[i] != 0; i++)
    {
        
    }
}

int main()
{
        char *src = "Jesus loves you";
        char *str = malloc(sizeof(char) * strlen(src));
        strcpy(str, src);
        char *delim = " ";
        char *token;
        int i = 0;

        token = strtok(str, delim);
        for (; token != NULL; i++)
        {
                //token = strtok(str, delim);
                printf("%s\n", token);
                token = strtok(NULL, delim);
        }

        free(str);

        return (0);
}