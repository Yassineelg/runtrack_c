// File: my_strcpy.c
// Description: Implementation of the my_strcpy function.

// Function: my_strcpy
// Parameters:
//   - dest: a pointer to the destination null-terminated string
//   - src: a pointer to the source null-terminated string
// Description: Copies the source string into the destination string.
void my_strcpy(char *dest, char *src)
{
    while ((*dest++ = *src++));
}