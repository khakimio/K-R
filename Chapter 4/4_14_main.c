#include<stdio.h>
#define swap (type, x, y) { type temp; \
              temp = x;\
              x = y;\
              y = temp; }

int main () {

    int a = 3, b = 5;
    swap (int, a, b);
    printf ("a = %d, b = %d\n", a, b);
    
    return 0;
}

