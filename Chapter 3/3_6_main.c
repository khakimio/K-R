#include <stdio.h>

int strlen1(char s[]);
void itoa (int n, char s[], int m);
void reverse (char s[]);

int main () {
    
    int n = -123, m = 6;
    char s[100];
    
    itoa(n, s, m);
    
    printf("%s\n", s);
    
    return 0;
}

int strlen1 (char s[]){
    int i;
    for (i = 0; s[i] != '\0'; ++i);
    
    return i;
}

void itoa (int n, char s[], int m) {
    int i = 0, sign;
    
    if ((sign = n) < 0) n = -n;
    
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    
    if (sign < 0)
        s[i++] = '-';
    
    while (i < m)
        s[i++] = '_';
    
    s[i] = '\0';
    reverse(s);
}

void reverse (char s[]) {
    
    int i, j;
    
    for (j = 0, i = strlen1(s) - 1; i > j; --i, ++j) {
        int temp;
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    
}


