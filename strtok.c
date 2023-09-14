#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strtok(char *str, const char *delim)
{
    static char *current_position; // Static variable to maintain the current position

    if (str != NULL)
        current_position = str; // Initialize the current position

    if (current_position == NULL || *current_position == '\0')
        return NULL;

    int insideWord = 0; // Flag to track if we're inside a word

    // Skip leading delimiters
    while (*current_position != '\0' && strchr(delim, *current_position) != NULL) {
        current_position++;
    }

    // Count the length of the token
    char *temp;
    for (temp = current_position; *temp != '\0'; temp++)
    {
        if (strchr(delim, *temp) != NULL)
        {
            // Check if we're transitioning from inside a word to a delimiter
            if (insideWord)
                break;
        }
        else
            insideWord = 1;
    }

    // Calculate the length of the token
    int tokenLength = temp - current_position;

    char *s = (char *)malloc(tokenLength + 1); // Allocate memory for the token
    if (s == NULL) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < tokenLength; i++) {
        s[i] = current_position[i]; // Copy the characters of the token
    }
    s[tokenLength] = '\0'; // Null-terminate the token

    // Update the current position
    current_position += tokenLength;

    return s;
}

int main() {
    char src[] = "i\0am good";
    char delim[] = " ";
    char *token;

    token = _strtok(src, delim);
    while (token != NULL)
    {
        printf("Token: %s\n", token);
        token = _strtok(NULL, delim);
    }
    free(token); // Free the allocated memory for the token


    return 0;
}
