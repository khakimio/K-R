/*

1.15 Exercise.

Modify the temperature conversion program to print the table in reverse order, 
that is, from 300 degrees to 0.
	
*/
#include <stdio.h>

int funcConvert (int f) {

    int res = (5.0/9.0) * (f - 32.0);
    return res;
}


int main () {

    float farh, cels;

    for (farh = 300; farh >= 0 ; farh -= 20) {

        cels = funcConvert(farh);
        printf("%3.0f, %3.0f\n", farh, cels);
    }


    return 0;
}
