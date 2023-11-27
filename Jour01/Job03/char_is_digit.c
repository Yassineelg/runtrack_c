// File: char_is_digit.c
// Description: Implementation of the char_is_digit function.

// Function: char_is_digit
// Parameters:
//   - c: a character
// Description: Returns 1 if the character is a digit, 0 otherwise.
int char_is_digit(char c)
{
    return (c >= '0' && c <= '9');
}