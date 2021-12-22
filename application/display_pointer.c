// Written by John Henderson (z5368143)
// z5368143@ad.unsw.edu.au

// Running:
// dcc display_pointers.c -o display_pointers
// ./display_pointers

#include <stdio.h>

int main(void) {

    int a = 0;
    int b = 0;

    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);

    // %p is used to print the pointers - written in base 16

    printf("The address of a is: %p\n", &a);
    printf("The address of b is: %p\n", &b);

    // You may see that even though we change the value, the address
    // stays constant. It is where the value lives in memory.

    a = 1;
    b = 42;
    
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);

    printf("The address of a is: %p\n", &a);
    printf("The address of b is: %p\n", &b);
    

    // You may also see that the size of a pointer is 32 bits, and when we access the
    // pointers they are exactly 4 bytes apart, or 32 bits.

    // This does not need to the case for single values, but for arrays they are always continuous
    // chuncks of memory.

    // It can also be seen that the place of memory on each run of the program may change.
}