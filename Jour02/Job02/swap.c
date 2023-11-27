// File: swap.c
// Description: Implementation of the swap function.

// Function: swap
// Parameters:
//   - a: a pointer to an integer
//   - b: a pointer to another integer
// Description: Swaps the values of the integers pointed to by a and b.
void swap(int *a, int *b) {
    if (a && b) {
        // Use XOR swap algorithm to exchange values without using a temporary variable.
        *a = *a ^ *b; // a = a ^ b
        *b ^= *a; // b = b ^ (a ^ b) = b ^ a ^ b = a
        *a ^= *b; // a = (a ^ b) ^ a = b'
    }
}