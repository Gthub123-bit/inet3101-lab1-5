// Example of using a Link List to manage a List of Data.  You cannot use a Linked List in Lab 2.  You have to use dynamic memory
// Why all these different data structures and approaches? Computing has been around for a long time and there are lots of options and approaches.
// I don't really see why anyone would use a Linked List anymore.
// This is the kind of thing that Python for example hoped to address.  Java, C# all have hundreds of different data structures/collection types.
// Python's contention "ya but don't like 3 or 4 of them kind of cover most uses?"

// I couldn't find my old examples from when I taught Computer Architecture, Operating Systems, and Algorithms & Data Structures at another institution
// (remember I don't have a comp sci degree....Electronics Engineering undergrad. I do have a Masters in Software Engineering - but that's a completely different discipline)

// I tried out CoPilot AI to generate this code.
// See if you can:
// A. Understand it (you SHOULD if you took algorithms and data structures)
// B. Make it rue
// C. Ponder why this kinda solves some of the same problems we're trying to solve using dynamic memory

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the list
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);

    printf("Linked List: ");
    printList(head);

    return 0;
}

/*

WRITE A SHORT PARAGRAPH:

How does using a linked list solve some of the same problems we are trying to overcome when using dynamic memeory?

*/
