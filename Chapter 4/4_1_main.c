#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int get_line (char s[], int size);
int strrindex (char s[], char t[]);

int main () {

    int len;
    char s[MAXLINE];
    char t[] = "hack";

    while ((len = get_line (s, MAXLINE)) > 0){
      
        printf ("%d\n", strrindex (s, t));
    }
        
    //    printf ("%d", strrindex(s, t));

    return 0;
}

int get_line (char s[], int size){

    int i, c;

    for (i = 0; i < size - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n')
        s[i] = '\0';

    return i;
}

int strrindex (char s[], char t[]) {

    int position = -1;
    int i, k, j;

    for (i = strlen(s); i >= 0; --i) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; k++, j++);
        if (k > 0 && t[k] == '\0')
            return position = i;
    }
    
    return position;
}











