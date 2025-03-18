#include <stdio.h>

int main(){
    int a = 95;
    char name[] = "Omkar";  // String
    int *ptr = &a;  // Pointer to int
    int **ptr2 = &ptr;  // Pointer to pointer
    int ***ptr3 = &ptr2;  // Pointer to pointer to pointer

    // Printing integer and its memory address
    printf("This is int a = %d\n", a);
    printf("This is memory address of a = %p\n", (void*)ptr);
    printf("This is memory address of ptr = %p\n", (void*)ptr2);
    printf("This is memory address of ptr2 = %p\n", (void*)ptr3);
    printf("This is memory address of ptr3 = %p\n", (void*)ptr3);

    // Printing values using pointers
    printf("This is value at ptr3 %p \n", (void*)*ptr3);
    printf("This is value at ptr2 %p \n", (void*)*ptr2);
    printf("This is value at ptr %c \n", *ptr);

    // Printing the string correctly
    printf("This is my name: %s\n", name);

    return 0;
}
