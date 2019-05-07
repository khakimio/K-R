#include <stdio.h>
#define MAXLINE 1000

int get_line (char line[], int maxline);
int removec (char s[]);

int main () {

    char line[MAXLINE];
    while (get_line(line, MAXLINE) > 0) {
        if (removec(line) > 0)
            printf("%s\n", line);
    }

    return 0;
}

int removec (char s[]) {

    int i;
    i = 0;

    while (s[i] != '\n')
        ++i;
    --i;

    while (i > 0 && (s[i] == ' ' || s[i] == '\t'))
        --i;

    if (i > 0) {
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }

}

int get_line (char s[], int size) {

    int i, c;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n')
        s[i] = c;

    ++i;
    s[i] = '\0';

    return i;
}
