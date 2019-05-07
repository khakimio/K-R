#include <stdio.h>

#define YES 1
#define NO 0


int htoi (char s[]);

int main () {

    char number[] = "0x10";

    printf ("%d\n", htoi(number));
    
    return 0;
}

int htoi (char s[]){

    int hex, n, i, status = YES;
    i = 0;
    
    if (s[i] == '0'){
        ++i;
        if (s[i] == 'x' ||  s[i] == 'X')
        ++i;
    }
    
    n = 0;

    for (; status == YES; ++i){

        if (s[i] >= '0' && s[i] <= '9'){

            hex = s[i] - '0';
        } else if (s[i] >= 'a' && s[i] <= 'f'){
            hex = s[i] - 'a' + 10;
        } else if (s[i] >= 'A' && s[i] <= 'F'){
            hex = s[i] - 'A' + 10;
        } else {
            status = NO;
        }

        if (status == YES)
            n = 16 * n + hex;
        
    }
    
    return n;
}


