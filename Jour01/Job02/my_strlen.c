// File: my_strlen.c
// Description: Implementation of the my_strlen function.

// Function: my_strlen
// Parameters:
//   - str: a pointer to a null-terminated string
// Description: Returns the length of the given string.
unsigned int my_strlen(const char *str)
{
    unsigned int length;

    for (length = 0; *str; ++length, ++str);

    return length;
}