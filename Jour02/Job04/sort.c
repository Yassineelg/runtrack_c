// File: sort.c
// Description: Implementation of the sort function.

// Function: sort
// Parameters:
//   - arr: an array of strings (terminated by a NULL pointer)
// Description: Sorts the input array of strings in ascending ASCII order using the bubble sort algorithm.
void sort(char *arr[]) {
    // Check if the input array is not NULL.
    if (!arr || !arr[0]) {
        return;
    }

    // Get the length of the array by counting until the NULL pointer.
    int length = 0;
    while (arr[length]) {
        length++;
    }

    // Bubble sort algorithm for sorting the array.
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            // Compare adjacent strings and swap if necessary.
            int k = 0;
            while (arr[j][k] && arr[j + 1][k] && arr[j][k] == arr[j + 1][k]) {
                k++;
            }

            if (arr[j][k] > arr[j + 1][k]) {
                // Swap the pointers (not the actual strings).
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}