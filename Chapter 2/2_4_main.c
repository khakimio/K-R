#include <stdio.h>

void squeeze (char s1[], char t1[]);

int main () {

    char str[] = "hakim";
    char how[] = "kms";

    squeeze(str, how);

    printf("%s\n", str);

    return 0;
}

void squeeze (char s1[], char s2[]) {

    int i, j, k = 0;

    for (i = 0; s1[i] !='\0'; ++i){
        for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; ++j);
        if (s2[j] == '\0')
            s1[k++] = s1[i];

    }

    s1[k] = '\0';
}
