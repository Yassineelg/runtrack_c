// File: my_strcmp.c
// Description: Implementation of the my_strcmp function.

// Function: my_strcmp
// Parameters:
//   - str1: a pointer to the first null-terminated string
//   - str2: a pointer to the second null-terminated string
// Description: Compares two strings and returns 0 if they are identical,
// a negative value if the first string is less than the second, or a positive
// value if the first string is greater than the second.
int my_strcmp(char *str1, char *str2)
{
    while (*str1 && *str1 == *str2)
        ++str1, ++str2;

    return *(unsigned char *)str1 - *(unsigned char *)str2;
}