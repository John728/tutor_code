// Written by John Henderson (z5368143)
// z5368143@ad.unsw.edu.au

// Running:
// dcc function_pointers.c -o function_pointers
// ./function_pointers

#include <stdio.h>

int add(int num);
void add_poorly(int num);
void add_pointer(int *num);

int main(void) {

    // Lets say I have an int variable, and when I call a function, I want it to add 1
    // to this int. There are now more ways to do this.

    // traditional way
    int a = 0;
    a = add(a);
    printf("a = %d\n", a); // Will print 1

    // Does not work
    int b = 0;
    add_poorly(b);
    printf("b = %d\n", b); // Will print 0

    // With pointers
    int c = 0;
    add_pointer(&c);
    printf("c = %d\n", c); // Will print 1
 


}

int add(int num) {
    return num + 1;
}

// Does not work
void add_poorly(int num) {
    num++;
}

void add_pointer(int *num) {
    // (The value at num)++;
    (*num)++;
}

