#include <stdio.h>

char *my_strchr(const char *str, int c) {
    // Iterate through the string until the end is reached
    while (*str != '\0') {
        if (*str == c) {
            // Return a pointer to the first occurrence of the character
            return (char *)str;
        }
        str++;
    }
    // Character not found, return NULL
    return NULL;
}

int main() {
    const char *text = "Hello, world!";
    int character = 'o';

    // Find the first occurrence of the character in the text
    char *result = my_strchr(text, character);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", character, result - text);
    } else {
        printf("Character '%c' not found in the text.\n", character);
    }

    return 0;
}
