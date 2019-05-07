#include <stdio.h>
#include <ctype.h>

double atof (char s[]);

int main () {

    char s[] = "2.4e+10";
    printf ("summa: %g \n", atof(s));
    
    return 0;
}


double atof (char s[]) {

    double res, val;
    int i, sign, exp;

    for (i = 0; isspace(s[i]); i++);

    sign = (s[i] == '-') ? -1 : 1;

    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');

    if (s[i] == '.')
        i++;

    for (res = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        res *= 10;
    }

    val = sign * val / res;

    if (s[i] == 'e' || s[i] == 'E') {
  
        sign = (s[++i] == '-') ? -1 : 1;

        if (s[i] == '+' || s[i] == '-')
            i++;
        
        for (exp = 0; isdigit(s[i]); i++)
            exp = 10 * exp + (s[i] - '0');
        
        if (sign == 1){
            while (exp --> 0)
                val *= 10;
        } else {
            while (exp --> 0)
                val /= 10;
        }
    }
    
    return val;
}




