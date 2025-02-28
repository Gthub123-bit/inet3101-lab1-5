//simple code if you want to assemble it to see the resulting assembly
//it is hard to "just look" at assembly and know what's going on.
//BUT the end result is that how memory is used from the CPU's perspective
//is really no differnt if it is being allocated using an Array or Malloc

#include <stdlib.h>

int main() {

    int *array = (int *)malloc(2 * sizeof(int));

    array[0] = 8;
    array[1] = 15;

}