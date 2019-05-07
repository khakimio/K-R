#include <stdio.h>
#include <ctype.h>
#define MAXSIZE 100

int getLine(char *s, int lim);
int atoi(char *s);


int main() {

    int n;
    char s[MAXSIZE], snumber[]= "1234";
    n = getLine(s, MAXSIZE);
    printf("getline: %d\n", n);
    printf("atoi: %d\n", atoi(snumber));

    return 0;
}

int getLine(char *s, int lim) {

    int c;
    char *t = s;

    while (--lim > 0 && (c = getchar()) != EOF && c !='\n')
        *s++ = c;

    if (c == '\n')
        *s++ = c;
    *s = '\0';
    
    return s - t;
}

int atoi(char *s) {

    int n, sign;
    for (; isspace(*s); s++);

    sign = (*s == '-') ? -1 : 1;

    if (*s == '+' || *s == '-')
        s++;

    for (n = 0; isdigit(*s); s++)
        n = 10 * n + *s - '0';

    
    return sign * n;
}

void itoa(int n, char *s) {
    
    int i = 0, sign;
    if ((sign = n) < 0) n = -n;
    
    do {
        *s++ = n % 10 + '0';
    } while ((n /= 10) > 0);
    
    if (sign < 0)
        *s++ = '-';
    
    *s = '\0';
    reverse(s);
}

void reverse (char *s){
    
    char *t;
    for (t = s + (strlen(s) - 1); t > s; t--, s++){
        int temp = *s;
        *s = *t;
        *t = temp;
    }
}

int strindex(char *s, char *t)
{
    char *begins = s;
    char *p;
    
    for (; *s != '\0'; s++) {
        for (p = s; *t !='\0' && *p == *t; p++, t++);
        if (t > 0 && *t =='\0')
            return s - begins;
    }
    
    return -1;
}


#define NUMBER '0';
int getch();
void ungetch(int);

int getop(char *s) {
    
    int c;
    while ((*s = c = getch()) == '.' || c == '\t');
    
    *(s + 1) = '\0';
    if (!isdigit(c) && c!= '.' && c!= '-')
        return c;
    if (isdigit(c))
        while (isdigit(*++s = c = getch()));
    if (c == '.')
        while (isdigit(*++s = c = getch()));
    
    *s = '\0';
    if(c != EOF)
        ungetch(c);
    return NUMBER;
}

