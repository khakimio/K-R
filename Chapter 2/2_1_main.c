/* 

Exercise 2-1

Write a program to determine the ranges of char, short, int, and long variables, both 
signed and unsigned, by printing appropriate values from standard headers 
and by direct computation. Harder if you compute them: determine the ranges of the 
various floating-point types.


*/
#include "stdio.h"
#include <limits.h>

int main () {
    
    printf("CHAR: \n");
    printf("Signed char is [%d, %d].\n", SCHAR_MIN, SCHAR_MAX);
    printf("Unsigned char is [%u, %u].\n", 0, UCHAR_MAX);
    printf("Char is [%d, %d].\n", CHAR_MIN, CHAR_MAX);
    printf("\n");
    printf("\n");
    
    printf("SHORT INT: \n");
    printf("Signed short int is [%hd,%hd].\n",SHRT_MIN, SHRT_MAX);
    printf("Unsigned short int is [%hu, %hu].\n", 0, USHRT_MAX);
    printf("\n");
    printf("\n");
    
    printf("INT: \n");
    printf("Signed int is [%d, %d].\n", INT_MIN, INT_MAX);
    printf("Unsigned int is [%u, %u].\n", 0, UINT_MAX);
    printf("\n");
    printf("\n");
    
    printf("LONG INT: \n");
    printf("Signed long int is [%ld, %ld].\n", LONG_MIN, LONG_MAX);
    printf("Unsigned long int is [%lu, %lu].\n", 0, ULONG_MAX);
    printf("\n");
    printf("\n");
    
    return 0;
}
