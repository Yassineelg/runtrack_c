// File: my_strdup.c
// Description: Implementation of the my_strdup function.

#include <stdlib.h>

// Function: my_strdup
// Parameters:
//   - str: a pointer to a null-terminated string
// Description: Allocates memory for a copy of the input string and copies it.
char *my_strdup(char *str)
{
    // Calculate the length of the input string.
    size_t length;
    for (length = 0; str[length]; ++length);

    // Allocate memory for the copy.
    char *copy = (char *)malloc((length + 1) * sizeof(char));

    // Check if memory allocation is successful.
    if (copy == NULL) {
        return NULL; // Return NULL if malloc fails.
    }

    // Copy the string into the newly allocated memory.
    char *dest = copy;
    while ((*dest++ = *str++));

    return copy;
}