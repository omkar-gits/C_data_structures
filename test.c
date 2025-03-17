#include <stdio.h>
//will be using this file as a main test file
//Dedicate directories will be made for specific data structures
int main(){
    int a = 65;
	int *ptr = &a;
	int **ptr2 = &ptr;
	int ***ptr3 = &ptr2;
	printf("This is int a = %d\n", a);
	printf("This is memory address of a = %p\n",ptr);
	printf("This is memory address of ptr = %p\n",ptr2);
	printf("This is memory address of ptr2 = %p\n",ptr3);
	printf("This is memory address of ptr3 = %p\n",ptr3);
	printf("This is value at ptr3 %p \n",*ptr3 );
	printf("This is value at ptr %p \n",*ptr2 );
	printf("This is value at a %d \n",*ptr);
	printf("This is value at ptr %p \n",*ptr);
	printf("This is value at ptr %c \n",*ptr);
}