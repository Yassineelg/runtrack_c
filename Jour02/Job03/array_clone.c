// File: array_clone.c
// Description: Implementation of the array_clone function.

#include <stdlib.h>

// Function: array_clone
// Parameters:
//   - arr: an array of strings (terminated by a NULL pointer)
//   - n: an integer specifying the number of strings to clone
// Description: Creates a new array of strings by cloning the first n strings from the input array.
//              The new array is terminated by a NULL pointer.
// Returns: A dynamically allocated array of strings.
char **array_clone(char *arr[], int n) {
    // Check if the input array is not NULL.
    if (!arr)
        return NULL;

    // Allocate memory for the new array of strings.
    char **clone = malloc((n + 1) * sizeof(char *));
    if (!clone)
        return NULL;

    // Copy each string from the input array to the new array.
    for (int i = 0; i < n && arr[i]; i++) {
        // Calculate the length of the current string.
        size_t length = 0;
        while (arr[i][length]) {
            length++;
        }

        // Allocate memory for the cloned string.
        clone[i] = malloc((length + 1) * sizeof(char));
        if (!clone[i]) {
            // Free previously allocated memory if an allocation fails.
            while (i--) {
                free(clone[i]);
            }
            free(clone);
            return NULL;
        }

        // Copy the string into the cloned array.
        for (int j = 0; j <= length; j++) {
            clone[i][j] = arr[i][j];
        }
    }

    // Terminate the new array with a NULL pointer.
    clone[n] = NULL;

    return clone;
}