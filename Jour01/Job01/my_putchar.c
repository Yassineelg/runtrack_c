// File: my_putchar.c
// Description: Implementation of the my_putchar function.

#include <unistd.h>

// Function: my_putchar
// Parameters:
//   - c: a character to be written to the standard output
// Description: Writes the given character to the standard output.
void my_putchar(char *c)
{
    write(1, &c, 1);
}