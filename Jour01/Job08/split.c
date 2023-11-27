// File: split.c
// Description: Implementation of the split function.

#include <stdlib.h>

// Function: split
// Parameters:
//   - str: a pointer to a null-terminated string
// Description: Splits the input string into an array of words, separating by spaces, tabs, and newline characters.
// Returns: A dynamically allocated array of strings, ending with a NULL pointer.
char **split(char* str) {
    int i = 0, j = 0, k = 0;
    int length = 0;
    int wordCount = 0;

    // Calculate the length of the input string and count the number of words.
    while (str[length]) {
        if (str[length] == ' ' || str[length] == '\t' || str[length] == '\n') {
            if (k > 0) {
                wordCount++;
                k = 0;
            }
        } else {
            k++;
        }
        length++;
    }

    // If the last word is present, increment the word count.
    if (k > 0) {
        wordCount++;
    }

    // Allocate memory for the result array.
    char** result = malloc((wordCount + 1) * sizeof(char*));

    // Reset counters for actual processing.
    i = 0;
    k = 0;

    // Process the input string.
    while (str[i]) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            if (k > 0) {
                // Allocate memory for the current word.
                result[j] = malloc((k + 1) * sizeof(char));

                // Copy the current word into the result.
                char* dest = result[j];
                for (int l = 0; l < k; l++)
                    *dest++ = str[i - k + l];
                *dest = '\0';

                j++;
                k = 0;
            }
        } else {
            k++;
        }
        i++;
    }

    // If the last word is present, allocate memory for it.
    if (k > 0) {
        result[j] = malloc((k + 1) * sizeof(char));

        // Copy the last word into the result.
        char* dest = result[j];
        for (int l = 0; l < k; l++)
            *dest++ = str[i - k + l];
        *dest = '\0';

        j++;
    }

    // Add a NULL pointer at the end of the result array.
    result[j] = NULL;

    return result;
}