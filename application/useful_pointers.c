// Written by John Henderson (z5368143)
// z5368143@ad.unsw.edu.au

// Running:
// dcc useful_pointers.c -o useful_pointers
// ./useful_pointers

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *return_name();
char *return_name_poorly();

int main(void) {

    // Lets say that we want to create a function that when we call it it returns a string
    // to us of a name. Before knowing pointers this was not possible as you could not return
    // arrays. THe reason for this is when a program is compiled, C must know how large a return
    // type needs to be. An array, unlike an int, has an unknown size to the compiler. Pointers
    // on the other hand are known to have a set size. This means that we can create the array,
    // then return a pointer to it.

    // Be careful, it takes a bit more effort than that.

    char *name_1 = return_name_poorly();
    printf("name_1 = %s\n", name_1);

    char *name_2 = return_name();
    printf("name_2 = %s\n", name_2);
}

// This function specifically tells C to not destroy 15 bytes of memory when this function ends.
// Be careful, malloc will not be cleared until you tell it to be cleared, or when the program
// finishes.
char *return_name() {
    char *name = malloc(sizeof(char) * 15);
    memcpy(name, "John Henderson", 15);
    return name;
}

// The array name will not exist outside of this function. Once this function ends, the 
// memory will no longer exist. That means when we return the pointer, it cannot point
// anywhere has the memory that holds the name has been destroyed.
char *return_name_poorly() {
    char name[] = "John Henderson";
    return name;
}
