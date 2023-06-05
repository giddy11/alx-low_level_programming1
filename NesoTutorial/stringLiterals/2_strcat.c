#include <stdio.h>

char* strc(char* str1, char* str2)
{
    int i = 0;
    for (; str1[i] != '\0'; i++)
    {
        ;
    }

    for (int j = 0; str2[j] != '\0'; j++, i++)
    {
        str1[i] = str2[j];
    }

    str1[i] = '\0';
    
    return (str1);
}

int main()
{
    char str1[98] = "Hello";
    char str2[] = " World";

    char *str3 = strc(str1, str2);
    
    printf("%s", str3);



    return (0);
}