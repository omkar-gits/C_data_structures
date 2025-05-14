#include<stdio.h>
unsigned int a = 5,b = 9,c;
int main(){
    printf("----Bitwise Operations in C----\n");
    c = a&b;// 0101 & 1001 = 0001 - 1
    printf(" And operation c = %u\n",c);
    c = a|b;//0101 | 1001 = 1101 - 13
    printf(" OR operation c = %u\n",c);
    c= a^b;//0101 ^ 1001 = 1100 - 12
    printf(" XOR operation c = %u\n",c);
    c = ~a;//32 bit integer 11111111111111111111111111111010
    printf(" Negation or Not operation c = %u\n",c);
    c  = a<<1;//00000000000000000000000000001010
    printf(" Left shift operation c = %u\n",c);
    c = a>>1;//00000000000000000000000000000010
    printf(" Right shift operation c = %u\n",c);

}