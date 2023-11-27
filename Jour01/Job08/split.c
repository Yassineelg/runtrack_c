// File: split.c
// Description: Implementation of the split function.

#include <stdlib.h>
#include <stdio.h>

// Function: split
// Parameters:
//   - str: a pointer to a null-terminated string
// Description: Splits the input string into an array of words, separating by spaces, tabs, and newline characters.
// Returns: A dynamically allocated array of strings, ending with a NULL pointer.
char** split(char* str) {
    int i = 0, j = 0, k = 0;
    int length = 0;

    // Calculate the length of the input string.
    while (str[length] != '\0') {
        length++;
    }

    char** result = malloc((length / 2 + 1) * sizeof(char*));

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            if (k > 0) {
                // Allocate memory for the current word.
                result[j] = malloc((k + 1) * sizeof(char));

                // Copy the current word into the result.
                for (int l = 0; l < k; l++) {
                    result[j][l] = str[i - k + l];
                }

                // Add null-terminator to the current word.
                result[j][k] = '\0';
                j++;
                k = 0;
            }
        } else {
            k++;
        }
        i++;
    }

    if (k > 0) {
        // Allocate memory for the last word.
        result[j] = malloc((k + 1) * sizeof(char));

        // Copy the last word into the result.
        for (int l = 0; l < k; l++) {
            result[j][l] = str[i - k + l];
        }

        // Add null-terminator to the last word.
        result[j][k] = '\0';
        j++;
    }

    // Add a NULL pointer at the end of the result array.
    result[j] = NULL;

    return result;
}