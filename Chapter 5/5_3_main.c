#include <stdio.h>

void str_cat (char *s, char *t);

int main () {

    char s[] = "Hakim";
    char t[] = "forever";

    str_cat(s, t);
    printf("%s\n", s);
        
    
    return 0;
}

void str_cat (char *s, char *t) {

    while (*s)
        s++;

    while ((*s++ = *t++));
    
}



