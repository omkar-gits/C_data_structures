#include <stdio.h>
#include <string.h>

const char ch_arr[5] = {'a','b','c','d','e'};
const char *ch_str = "Omkar";

// So basically:
// char ch_str[] = "Omkar"; works because we are declaring a char array.
// The compiler automatically appends a null terminator '\0' at the end,
// so it is equivalent to: {'O', 'm', 'k', 'a', 'r', '\0'} stored as an array.
//
// But if we do:
// char *ch_str[] = "Omkar"; (Actually this does not work anywhere)
// it won't work because ch_str[] is an array of **char pointers**,
// meaning each element in the array should be a pointer to a string.
// But "Omkar" is just a single string, not multiple pointers.
//
// However:
// char *ch_str = "Omkar"; 
// Works because here we are declaring a pointer to a string literal.
// The string "Omkar" is stored in **read-only memory** (in most compilers),
// and ch_str stores the memory address of the first character ('O').
//
// Since ch_str holds an address, when printing it:
// - printf("%s", ch_str); → Works, prints "Omkar" (it knows it's a string).
// - printf("%c", *ch_str); → Works, prints 'O' (dereferencing to get value).
//
// But since ch_str is a pointer, dereferencing is required
// when we want to access individual characters.


int main(){
	//just basic printing out the default values
	printf("this is char at char array index %c \n",ch_arr[0]);
	printf("this is String %s \n", ch_str);
	//printing out using memory address
	printf("this is value at a memory location %c \n", *ch_str);
	printf("this is the memory address %p \n", &ch_str);
	return 0;
}
