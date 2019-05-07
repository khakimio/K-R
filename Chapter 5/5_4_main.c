#include <stdio.h>

int strend (char *s, char *t);

int main() {

    char s[] = "Hakim";
    char t[] = "kim";
    strend (s, t);
    
    printf("%d\n", strend(s, t));
    
    return 0;
}

int strend (char *s, char *t) {

    char *first_s = s;
    char *first_t = t;
    
    for (; *s; s++);
    for (; *t; t++);

    for(; *s == *t; s--, t--)
        if (t == first_t || s == first_s)
            break;

    if (*s == *t && t == first_t && *s!='\0')
        return 1;
    else
        return 0;
 }
