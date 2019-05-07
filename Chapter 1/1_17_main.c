#include <stdio.h>
#define MAXSIZE 1000
#define LONGSTRIN 80

int get_line (char line[], int maxline);

void copy (char to[], char from[]);

main () {

    int len;
    int max;
    char line[MAXSIZE];
    char longest[MAXSIZE];

    max = 0;

    while ((len = get_line (line, MAXSIZE)) > 0) {
        if (len > LONGSTRIN) {
            printf("%s\n", line);
        }
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
