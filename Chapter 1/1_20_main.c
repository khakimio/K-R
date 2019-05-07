#include <stdio.h>
#define TAB 5

int main () {

    int c, nb, pos;
    nb = 0;
    pos = 1;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            nb = TAB - (pos - 1) % TAB;
            while (nb > 0){
                putchar(' ');
                ++pos;
                --nb;
            }
        } else if (c == '\n') {
            putchar(c);
            pos = 1;
        } else {
            putchar(c);
            ++pos;
        }
    }

}

void detab (char to[], char from[]) {
    
    int n, i = 0, j = 0, sym = 0;
    
    for (;from[i] != '\0'; i++){
        if (from[i] == '\t'){
            n = TAB - (sym % TAB);
            for (;n > 0; n--) {
                to[j++] = '|';
                ++sym;
            }
        } else {
            to[j++] = from[i];
            ++sym;
        }
    }
    
    to[j] = '\0';
}


