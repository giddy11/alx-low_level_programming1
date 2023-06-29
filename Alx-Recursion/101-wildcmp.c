#include <stdio.h>

// int wildcmp(char *s1, char *s2)
// {
// 	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
// 		return (0);
// 	if (*s1 == '\0' && *s2 == '\0')
// 		return (1);
// 	if (*s1 == *s2)
// 		return (wildcmp(s1 + 1, s2 + 1));
// 	if (*s2 == '*')
// 		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
// 	return (0);
// }

int wildcmp(char *s1, char *s2)
{
    // If both strings are empty, they are considered identical.
    if (*s1 == '\0' && *s2 == '\0')
        return 1;

    // If the current characters match, move to the next characters in both strings.
    if (*s1 == *s2)
        return wildcmp(s1 + 1, s2 + 1);

    // If the current character in s2 is '*', it can replace any string (including an empty string).
    if (*s2 == '*')
    {
        // Recursively check for two possibilities:
        // 1. '*' represents an empty string: Move to the next character in s2.
        // 2. '*' represents one or more characters: Keep s2 and move to the next character in s1.
        return wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2);
    }

    // If none of the above conditions are met, the strings are not identical.
    return 0;
}

int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);
    return (0);
}