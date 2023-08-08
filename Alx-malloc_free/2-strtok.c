#include <stdio.h>

// Custom implementation of strchr to find the first occurrence of a character in a string
char *my_strchr(const char *str, int c);

// Custom strtok function to tokenize a string using a given delimiter
char *my_strtok(char *str, const char *delim);

int main(void) {
    char input_string[] = "This is a test sentence.";
    char *token = my_strtok(input_string, " ");

    while (token != NULL) {
        printf("%s\n", token);
        token = my_strtok(NULL, " ");
    }

    return 0;
}

// Custom implementation of strchr
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

// Custom strtok function
char *my_strtok(char *str, const char *delim) {
    static char *next_token = NULL;

    // Initialize or reset the next_token pointer if str is provided
    if (str != NULL) {
        next_token = str;
    }

    // If next_token is NULL or points to the end of the string, no more tokens
    if (next_token == NULL || *next_token == '\0') {
        return NULL;
    }

    // Find the start of the token by skipping delimiter characters
    char *token_start = next_token;
    while (*token_start != '\0' && my_strchr(delim, *token_start) != NULL) {
        token_start++;
    }

    // If no more tokens found, return NULL
    if (*token_start == '\0') {
        next_token = NULL;
        return NULL;
    }

    // Find the end of the token
    char *token_end = token_start + 1;
    while (*token_end != '\0' && my_strchr(delim, *token_end) == NULL) {
        token_end++;
    }

    // If the token is not at the end of the string, replace the delimiter with null-termination
    if (*token_end != '\0') {
        *token_end = '\0';
        next_token = token_end + 1;
    } else {
        // No more tokens after this one
        next_token = NULL;
    }

    // Return the token start pointer
    return token_start;
}
