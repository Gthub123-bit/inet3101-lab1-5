// nothing much here other than showing how to allocate memory using malloc
// comparing it how it is done with an array.

//printf is in this library
#include <stdio.h>

//the malloc function is in this library
#include <stdlib.h>

int main() {

    // use malloc to allocate space for 4 item each the size of an int (aka 4 bytes, aka 32-bits)
    int *array1 = (int *)malloc(4 * sizeof(int));

    // this kinda does the same thing
    int array2[4];

    printf("\n\nIndex 0 of the memory allocation starts at: %p" , &array1[0]);
    printf("\n\nIndex 0 of array 2 starts at: %p" , &array2[0]);

    printf("\n\nValue at index 0 is %d: ", array1[0]);
    printf("\n\nValue at index 0 is %d: ", array2[0]);

    printf("\n\n");

    //make sure to clean up you memory.
    //the OS will clean up the array automatically
    //the memory allocated by malloc will not.

    free(array1);

}

/*

NOTHING TO DO OR SUBMIT HERE - THIS WAS MOSTLY FOR DEMO IN CLASS

When using malloc to allocate space, from the "machine's" perspective it really isn't all that 
different than when declaring an array.  

There is a difference in terms of what the OS does with that memory when the program finishes running.abort

Memory allocated by declaring an array - will be "cleaned up" by the Operating System when our program ends.abort

The memory will be available for other programs.

Memory allocated by "malloc" however stays allocated.  To return the memory back to the OS we must
actively stop using the memory.

*/