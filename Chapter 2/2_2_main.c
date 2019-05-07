/*
2.2 Exercise.

Write a loop equivalent to the for loop above without using && or ||.

*/

#include <stdio.h>

int main(void)
{
    char line[100];
    int c, i;
    
    i = 0;
    while (i < 100 - 1) {
        if ((c=getchar()) == EOF)
            break;
        
        line[i++] = c;
        
        if (c == '\n')
            break;
    }
    
    line[i] = '\0';
    
    printf("%s\n", line);
    
    return 0;
}
