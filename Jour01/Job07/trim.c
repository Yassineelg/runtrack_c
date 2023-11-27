// File: trim.c
// Description: Implementation of the trim function.

#include <stdlib.h>

// Function: trim
// Parameters:
//   - str: a pointer to a null-terminated string
// Description: Allocates memory for a trimmed copy of the input string (removing leading
// and trailing whitespaces) and copies it.
char *trim(const char *str)
{
    // Find the start of the actual content (skip leading whitespaces).
    while (*str && (*str == ' ' || *str == '\t' || *str == '\n'))
        ++str;

    // Calculate the length of the remaining content.
    const char *start = str;
    while (*str)
        ++str;
    while (str > start && (*(str - 1) == ' ' || *(str - 1) == '\t' || *(str - 1) == '\n'))
        --str;

    // Allocate memory for the trimmed copy.
    size_t length = str - start;
    char *trimmed = (char *)malloc((length + 1) * sizeof(char));

    // Check if memory allocation is successful.
    if (trimmed == NULL)
        return NULL; // Return NULL if malloc fails.

    // Copy the trimmed string into the newly allocated memory.
    char *dest = trimmed;
    while (length--)
        *dest++ = *start++;

    *dest = '\0'; // Add null-terminator to the trimmed string.

    return trimmed;
}