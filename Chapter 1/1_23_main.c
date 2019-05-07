#include <stdio.h>

void remove_comment(int);

int main () {
    
    int c;
    
    while ((c = getchar()) != EOF) {
        remove_comment(c);
    }
    return 0;
}

void in_comment () {
    int c, d;
    d = getchar();
    c = getchar();
    
    while (c != '*' || d != '/') {
        c = d;
        d = getchar();
    }
}

void remove_comment (int c) {
    int d;
    
    if (c == '/')
        if ((d = getchar()) == '*') {
            in_comment();
        } else if (d == '/') {
            putchar(c);
            remove_comment(d);
        } else {
            putchar(c);
            putchar(d);
        }
     else
        putchar(c);
}

