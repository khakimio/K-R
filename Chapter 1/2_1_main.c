#include <stdio.h>
#include <limits.h>

int main () {

    printf("signed char min:%d\n", SCHAR_MIN);
    printf("signed char max:%d\n", SCHAR_MAX);
    printf("signed short min:%d\n", SHRT_MIN);
    printf("signed short max:%d\n", SHRT_MAX);
    printf("signed integer min:%d\n", INT_MIN);
    printf("signed integer max:%d\n", INT_MAX);
    printf("signed long min:%ld\n", LONG_MIN);
    printf("signed long max:%ld\n", LONG_MAX);

    printf("unsigned char max:%d\n", UCHAR_MAX);
    printf("unsigned short max:%d\n", USHRT_MAX);
    printf("unsigned int min:%d\n", UINT_MAX);
    printf("unsigned long max:%ld\n", ULONG_MAX);

    return 0;
}
