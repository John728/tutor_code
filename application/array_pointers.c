// Written by John Henderson (z5368143)
// z5368143@ad.unsw.edu.au

// Running:
// dcc array_pointers.c -o array_pointers
// ./array_pointers

#include <stdio.h>

#define N   10

int main(void) {

    int arr[N] = {0};

    // Loop through all values in the array and print out their position, value 
    // and pointer. 
    int i = 0;
    while (i < N) {
        printf("Position %d - value %d - pointer %p\n", i, arr[i], &arr[i]);
        i++;
    }

    // You will notice that all the pointers follow a pattern. They are all 4 bytes apart.
    // This is beacuse they point to 32 bit intergers, which are 4 bytes. This shows us that
    // the array is stored in memory continously for arrays. 


    // You may notice that if you were to do this:
    // printf("%p\n", &array[0]);
    
    // you will get the same value as:
    // printf("%p\n", &array);


    // This is beacuse when you declare an array 'arr', you really are handling the pointer
    // already. For arrays, a pointer to the array just points to the first value. When you go
    // arr[1] for an int array, really what your saying is go to the next pointer, and give me 
    // the value that it is pointing to. 

    // There is complicated ways to access arrays and values using pointer arithmatic, but this
    // is not recommened as it can lead to bad bugs which are hard to find.
}