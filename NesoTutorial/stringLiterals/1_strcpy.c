#include <stdio.h>
#include <string.h>

char *_strncpy(char *dest, char *src, int n)
{
    int i, j;

    for (i = 0; src[i] != '\0' && n > 0; i++)
    {
        dest[i] = src[i];
        n--;
    }

    // dest[i] = '\0';
    j =  i;

    // for (; n > j; j++)
    // {
    //     dest[j] = '\0';
    // }

    for (; n > 0 && dest[i] != '\0'; i++)
    {
        dest[i] = '\0';
    }

    // dest[i] = '\0';

    return dest;
}

// int main(void)
// {
//     char s1[98];
//     char *ptr;
//     int i;

//     for (i = 0; i < 98 - 1; i++)
//     {
//         s1[i] = '*';
//     }
//     s1[i] = '\0';
//     printf("%s\n", s1);
//     ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
//     printf("%s\n", s1);
//     printf("%s\n", ptr);
//     ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
//     printf("%s", s1);
//     printf("%s", ptr);
//     for (i = 0; i < 98; i++)
//     {
//         if (i % 10)
//         {
//             printf(" ");
//         }
//         if (!(i % 10) && i)
//         {
//             printf("\n");
//         }
//         printf("0x%02x", s1[i]);
//     }
//     printf("\n");
//     return (0);
// }

int main()
{
    char str1[12] = "Hello";
    char str2[4];

    char *str = strncpy(str2, str1, sizeof(str2));
    printf("%s\n", str);
    _strncpy(str2, str1, sizeof(str2));
    str2[sizeof(str2) - 1] = '\0';

    printf("%s\n", str2);

    return (0);
}