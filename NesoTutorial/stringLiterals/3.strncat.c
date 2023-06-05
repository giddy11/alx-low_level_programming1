#include <stdio.h>
#include <string.h>

char* strnc(char* str1, char* str2, int n)
{
    int i = 0;
    for (; str1[i] != '\0'; i++)
    {
        ;
    }

    for (int j = 0; str2[j] != '\0' && n > 0; j++, i++, n--)
    {
        str1[i] = str2[j];
    }

    str1[i] = '\0';
    
    return (str1);
}

int main()
{
    char str1[5], str2[100];

    strcpy(str1, "He");
    strcpy(str2, "llo!");

    // strncat(str1, str2, 2);
    // strnc(str1, str2, 2);
    strnc(str1, str2, sizeof(str1) - strlen(str1) - 1);



    printf("%s", str1);



    return (0);
}