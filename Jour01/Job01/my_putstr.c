// File: my_putstr.c
// Description: Implementation of the my_putstr function.

void my_putchar(char c);

// Function: my_putchar
// Parameters:
//   - str: a pointer to a null-terminated string
// Description: Writes the given string to the standard output using my_putchar.
void my_putstr(const char *str)
{
    while (*str)
        my_putchar(*str++);
}