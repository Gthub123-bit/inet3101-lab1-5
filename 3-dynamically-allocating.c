#include <stdio.h>
#include <stdlib.h>

// Function to resize the array dynamically
int* resizeArray(int *array, int *volume) {
    *volume *= 2;  // Double the capacity
    int *temp = (int*)realloc(array, (*volume) * sizeof(int));
    
    if (temp == NULL) {
        printf("Memory reallocation failed!\n");
        free(array);
        exit(1);
    }

    printf("Array resized! New capacity: %d\n", *volume);  // Inform user
    return temp;
}

int main() {
    int *array = NULL;  // Pointer for dynamically allocated array
    int size = 0;       // Number of elements stored
    int volume;         // Initial capacity (set by user)
    int num;            // Variable to store user input

    // Ask user for the initial number of elements
    printf("Enter the initial number of elements to allocate memory for: ");
    scanf("%d", &volume);

    // Validate user input
    if (volume <= 0) {
        printf("Invalid size! Exiting program.\n");
        return 1;
    }

    // Allocate initial memory
    array = (int *)malloc(volume * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter numbers (type -1 to stop):\n");

    // Continuous loop to take user input
    while (1) {
        scanf("%d", &num);
        if (num == -1) break;  // Stop condition

        // Resize the array if needed
        if (size == volume) {
            array = resizeArray(array, &volume);
        }

        array[size++] = num; // Store number
    }

    // Print stored numbers
    printf("\nYou entered:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free allocated memory
    free(array);

    return 0;
}
