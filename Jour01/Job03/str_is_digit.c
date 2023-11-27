// File: str_is_digit.c
// Description: Implementation of the str_is_digit function.

// Function: str_is_digit
// Parameters:
//   - str: a pointer to a null-terminated string
// Description: Returns 1 if the string contains only digits, 0 otherwise.
int str_is_digit(const char *str)
{
    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0; // Not a digit found.
        }
        ++str;
    }

    return 1; // All characters are digits.
}