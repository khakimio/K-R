#include <stdio.h>
#define abs(x) ((x) > 0 ? (x) : -(x))

void itoa (int n, char s[]);

int main () {

    int n = -12345;
    char s[100];

    itoa (n, s);
    
    
    printf ("%s\n", s);

    return 0;
}


void itoa (int n, char s[]){


    int i = 0, sign;

    sign = n;

    do {
        s[i++] = abs(n % 10) + '0';
    } while ((n /= 10 ) != 0);

    if (sign < 0)
        s[i++] = '-';
    
    s[i] = '\0';
    
    // reverse (s);   
}

