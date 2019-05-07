#include <stdio.h>
#include <string.h>


void strncp (char *s, char *t, int n);
void strncat1 (char *s, char *t, int n);
int  strncmp1 (char *s, char *t, int n);

int main() {

    return 0;
}

void strncp (char *s, char *t, int n) {
    
    while (*t && n--)
        *s++ = *t++;
    while (*s)
        *s++ = '\0';
}

void strncat1 (char *s, char *t, int n) {
   
    strncp (s + (strlen(s)), t, n);
}

int strncmp1 (char *s, char *t, int n) {

    for (; *s == *t && n-- > 0; s++, t++)
        if (*s == '\0' || n == 0)
            return 0;
    
    return *s - *t;
}

