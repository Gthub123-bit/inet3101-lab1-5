#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book {
    char bookTitle[150]; // Increased size for longer titles
    int bookNumber;
    int bookPages;
};

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number_of_books>\n", argv[0]);
        return 1;
    }

    int num_books = atoi(argv[1]);
    struct book* Array = (struct book*)malloc(num_books * sizeof(struct book));

    if (Array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("\nEnter information for %d books:\n", num_books);
    for (int i = 0; i < num_books; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Enter book title: ");
        getchar();  // Consume newline left by previous input
        fgets(Array[i].bookTitle, sizeof(Array[i].bookTitle), stdin);
        Array[i].bookTitle[strcspn(Array[i].bookTitle, "\n")] = '\0'; // Remove trailing newline

        printf("Enter book number: ");
        scanf("%d", &Array[i].bookNumber);

        printf("Enter number of pages: ");
        scanf("%d", &Array[i].bookPages);
    }

    // Print book details
    printf("\nHere is the data for all the books:\n");
    for (int i = 0; i < num_books; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", Array[i].bookTitle);
        printf("Number: %d\n", Array[i].bookNumber);
        printf("Pages: %d\n", Array[i].bookPages);
    }

    printf("\n");

    free(Array);
    return 0;
}


/*

WHAT TO DO

MODIFY THIS CODE

Instead of a stupid example structure (really this is the best you could think of Joe - "myStruct", "myInt", come on man)

Update this code to do something more...real world.

For examle:

Maybe create a structure like this:

struct book {

    char bookTitle[10];
    int bookNumber;
    int bookPages;

};

Example data might be (remember we're just making stuff up here)  Here title is some made-up title.  A made up inventory number.  A made up number of pages (not a very big book...).

bookTitle - Joe's Life
bookNumber - 1234
bookPages - 23


*/