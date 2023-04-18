#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *cap_string(char *str)
{
        int i, k, j, cap_next;
        cap_next = 1;
        // char arr[] = {32,9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
        char arr[] = {' ', '.'};
        k = 0;

        while (str[k] != '\0')
        {
            k++;
        }
        

        for (i = 0; i < k ; i++)
        {
            if (str[i] >= 97 && str[i] <= 122) 
            {
                    // str[i] = str[i] - 32;
                        for (j = 0; arr[j] != '\0'; j++)
                        {
                            if (arr[j] == str[i])
                                {
                                        str[i+1] = str[i+1] - 32;
                                }
                        }
            }
            
        }

        return str;
}

int main(void)
{
    // char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char str[] = "yes i. love you, so much.";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    // printf("%s", str);


    return (0);
}