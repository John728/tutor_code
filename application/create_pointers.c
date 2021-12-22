// Written by John Henderson (z5368143)
// z5368143@ad.unsw.edu.au

// Running:
// dcc create_pointers.c -o create_pointers
// ./create_pointers

#include <stdio.h>

int main(void) {

    // Creating pointers

    // You declare a pointer with a star (*)

    // Declaring a pointer that points to an:
    int *a;
    char *b;
    long *c;
    double *d;
    printf("a is the pointer: %p\n", a);
    printf("a has the value: %d\n\n", *a);
    // If its a thing, you can have a pointer to it.
    // At the moment, all these pointers point to random values.
    // cannot know what the value will be.


    // Putting a value at a pointer

    // You can get the address of a normal value using ampersand (&)

    int num = 42;
    printf("num pointer: %p\n", &num); 
    printf("num has the value: %d\n\n", num);

    // let a point to the same place as num
    a = &num;
    
    printf("a is the pointer: %p\n", a);
    printf("a has the value: %d\n\n", *a);  
    
    // You can see that the pointer a, now points to the same value as num
    // Note: You have not duplicated the value of num, but simply now can access
    // it in multiple ways. Any change to num, will be reflected by a. For instance:

    num = 0;
    printf("num pointer: %p\n", &num); 
    printf("num has the value: %d\n\n", num);  
    printf("a is the pointer: %p\n", a);
    printf("a has the value: %d\n", *a);  

}

