#include <stdio.h>
#include <stdlib.h>

int count_word(char *s)
{
	int flag, c, word_count, length;

    // length = 1;
	flag = 0;
	word_count = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
        // length = 1;
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			word_count++;
            // length = word_count + 1;
		}
	}

	// if (word_count > 2)
	// 	length += 2;
	// else if (word_count > 1)
	// 	length += 1;

	return (word_count);
}





int main(void) 
{
    char input_string[] = "      ALX   School     #cisfun     ";
    // char input_string[] = "ale";
    int word_count = count_word(input_string);

    printf("Number of words: %d\n", word_count);

    return 0;
}
