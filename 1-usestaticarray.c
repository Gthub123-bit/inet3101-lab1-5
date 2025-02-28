//This code reviews what was discussed earlier in class
//that arrays are static structures, but it is possible to index outside the bounds
//of the array and write over another data structures data.
//here is one that the gcc compiler won't catch (you have to set it up different for Mac vs. Windows - look at the information at the bottom

#include <stdio.h>

int main() {

    int array2[] = {10,11,12,13};
    int array1[4]; 
    int array3[] = {14,15,16,17};

    printf("\n\n");
    printf("\nIndex 0 of the array1 starts at: %p" , &array1);
    printf("\nIndex 1 of the array2 starts at: %p" , &array2);
    printf("\nIndex 0 of the array3 starts at: %p" , &array3);


    for (int i = 0; i < 10; i++){

        printf("\n\nPlease enter a number: ");  
        scanf("%d", &array1[i]);

        printf("\n\nCurrent numbers in array2 are: ");

        for (int i = 0; i < 4; i++) {
            printf(" %d ", array1[i]);
        }

        printf("\n\nCurrent numbers in array3 are: ");

        for (int i = 0; i < 4; i++) {
            printf(" %d ", array2[i]);
        }

    }

    printf("\n\n");

    return 0;

}

/*

WHAT TO DO:

All you need to do here is just give this a try.  Create a Word Document and send me a screenshot of you running this code demonstrating 
how by adding elements to one array, if we go out-of-bounds, we could over write the othe array. 

When compiled with GCC on a Mac, we can demonstrate how, given the code above, we could overwrite data in the other array

Make sure you understand why the code above is BAD.

WINDOWS USERS: This will likely work different on your system.  Windows always seems to put empty arrays after a populated array.asm

So intead: Use the two populated arrays.  Update the code and run it.  If what I just said here makes no sense please please pretty please reach out to me.

If it is not working the way I show below, reach out to me.


EXAMPLE ON A MAC:

jaxberg@Joes-MacBook-Pro inet3101-dynamic-memory % gcc 1-usestaticarray.c -o static
jaxberg@Joes-MacBook-Pro inet3101-dynamic-memory % ./static                        



Index 0 of the array1 starts at: 0x16fa375d0
Index 1 of the array2 starts at: 0x16fa375e0

Please enter a number: 4


Current numbers in array2 are:  4  1  1872983800  1 

Current numbers in array3 are:  10  11  12  13 

Please enter a number: 5


Current numbers in array2 are:  4  5  1872983800  1 

Current numbers in array3 are:  10  11  12  13 

Please enter a number: 6


Current numbers in array2 are:  4  5  6  1 

Current numbers in array3 are:  10  11  12  13 

Please enter a number: 7


Current numbers in array2 are:  4  5  6  7 

Current numbers in array3 are:  10  11  12  13 

Please enter a number: 8


Current numbers in array2 are:  4  5  6  7 

Current numbers in array3 are:  8  11  12  13 

Please enter a number: 


*/





