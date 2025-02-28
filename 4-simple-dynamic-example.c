//This code comes straight from the W3SCHOOLS examples
//Nothing special here.  Just rather than using an Array
//calloc is used to allocate memory
//12 items in the allocation, each the "sizeof" integers
//so 48 bytes will be allocated
//each 4 byte item accessible via the INDEX: 0,1,2...11

#include <stdio.h>
#include <stdlib.h>

int main() {

  int *students;
  int numStudents = 12;
  students = calloc(numStudents, sizeof(*students));
  printf("\n\n%zd", numStudents * sizeof(*students)); // 48 bytes

  printf("\n\nVariable 'students' starts at %p", students);

  //use the memory

  students[0] = 2;
  students[1] = 4;
  students[2] = 6;

  printf("\n\nValue at index 0 of allocated memory is: %d", students[0]);
  printf("\n\nSize of data at first index is:  %zd", sizeof(students[0]));

  printf("\n\n");

  return 0;

}

/*

WHAT TO DO:

Just compile and run this code.  Add a screenshot to your doc showing you compiles and ran it.

*/
