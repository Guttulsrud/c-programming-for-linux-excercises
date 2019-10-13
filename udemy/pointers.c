//
// Created by Håkon Guttulsrud
//

#include <stdio.h>
#include <stdlib.h>

// Printing basic pointer info
void printPointerInfo() {

    int number = 0;
    int * pointer = NULL;

    pointer = &number;

    printf("Adress of the pointer: %p\n", &pointer);
    printf("Adress of the number: %p\n", &number);
    printf("Value of the pointer: %p\n", pointer);
    printf("Value of the pointers target: %d\n", *pointer);
}




int main() {



}

