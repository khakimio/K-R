#include <stdio.h>

void rec (int, char[]);

int main () {
    
  char s[10];
  rec (1234, s);
    
  printf ("%s\n", s);
    
}

void rec (int n, char s[]){
    
  static int i;
    
  if (n / 10)
    rec (n / 10, s);
  else
    i = 0;
    
  s[i++] = n % 10 + '0';
  s[i] = '\0';
    
}
