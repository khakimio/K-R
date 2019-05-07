#include <stdio.h>
#define MAXSIZE 1000


int get_line (char line[], int maxline);

void reverse (char array[]);

main () {

    int len;
    char line[MAXSIZE];

    while ((len = get_line (line, MAXSIZE)) > 0) {
        reverse(line);
        printf("%s\n", line);
    }

    return 0;
}

int get_line (char s[], int lim) {

    int c, i, j;
    j = 0;

    for (i = 0; (c = getchar()) != EOF && c !='\n'; ++i) {
        if (i < lim - 2){
            s[j] = c;
            ++j;
        }
    }

    if (c == '\n') {
        s[j] = c;
        ++j;
        ++i;
    }

    s[j] = '\0';
    return i;
}

void reverse (char array[]){

    int i = 0, j = 0;
    char temp;

    while (array[i] != '\0')
        ++i;

    --i;

    if (array[i] == '\n')
        --i;

    while (j < i) {
        temp = array[j];
        array[j] = array[i];
        array[i] = temp;
        --i;
        ++j;
    }
}
