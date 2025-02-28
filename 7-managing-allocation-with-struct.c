// neat example of using a Struct as a way to manage an allocation of memory and track whats in it.
// here the allocation managed by the struct keeps a list of integers, resizing when necessary
// notice how they also implemented a separate function to add an item to the list
// what might a function that deletes an item from the list look like?
// what might a function that inserts an item into the list look like?

#include <stdio.h>
#include <stdlib.h>

struct list {
  int *data; // Points to the memory where the list items are stored
  int numItems; // Indicates how many items are currently in the list
  int size; // Indicates how many items fit in the allocated memory
};

//this is just a function declaration, the implementation is at the bottom.
void addToList(struct list *myList, int item);

int main() {
  struct list myList;
  int amount;

  // Create a list and start with enough space for 10 items
  myList.numItems = 0;
  myList.size = 10;
  myList.data = malloc(myList.size * sizeof(int));

  // Find out if memory allocation was successful
  if (myList.data == NULL) {
    printf("Memory allocation failed");
    return 1; // Exit the program with an error code
  }
  
  // Add any number of items to the list specified by the amount variable
  amount = 44;
  for (int i = 0; i < amount; i++) {
    addToList(&myList, i + 1);
  }

  // Display the contents of the list
  for (int j = 0; j < myList.numItems; j++) {
    printf("%d ", myList.data[j]);
  }

  // Free the memory when it is no longer needed
  free(myList.data);
  myList.data = NULL;
  return 0;
}

// This function adds an item to a list
void addToList(struct list *myList, int item) {

  // If the list is full then resize the memory to fit 10 more items
  if (myList->numItems == myList->size) {
    myList->size += 10;
    myList->data = realloc( myList->data, myList->size * sizeof(int) );
  }

  // Add the item to the end of the list
  myList->data[myList->numItems] = item;
  myList->numItems++;
}

/*

Just review this.  This is the example from W3SCHOOLS

Nothing to submit.

It might be helpful for Lab 2

*/