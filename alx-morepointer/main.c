#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *rot13(char *str)
{
    char first_letters[] = {65,66,67,68,69,70,71,72,73,74,75,76,
                            77,78,79,80,81,82,83,84,85,86,87,88,
                            89,90,97,98,99,100,101,102,103,104,
                            105,106,107,108,109,110,111,112,113,
                            114,115,116,117,118,119,120,121,122};
                            
    char second_letters[] = {78,79,80,81,82,83,84,85,86,87,88,89,
                            90,65,66,67,68,69,70,71,72,73,74,75,
                            76,77,110,111,112,113,114,115,116,117,
                            118,119,120,121,122,97,98,99,100,101,
                            102,103,104,105,106,107,108,109};

    int i, j, k;
    i = 0;

    while (str[i])
    {
        for (j = 65, k = 97; j < 91 && k < 122; i++)
        {
            if (str[i] == first_letters[j])
            {
                str[i] = first_letters[j + 13];
                break;
            }
            
        }
        
    }
    return str;
    
}

int main(void)
{
    // char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char s[] = "ROT13 (\"rotate";

    char *p;

    p = rot13(s);
    printf("%s", p);
    // printf("------------------------------------\n");
    // printf("%s", s);
    // printf("------------------------------------\n");
    // p = rot13(s);
    // printf("%s", p);
    // printf("------------------------------------\n");
    // printf("%s", s);
    // printf("------------------------------------\n");
    // p = rot13(s);
    // printf("%s", p);
    // printf("------------------------------------\n");
    // printf("%s", s);


    return (0);
}