/*
  Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.

 */

#include <stdio.h>

int main() {
    
  printf("fahr   celsius\n");
  printf("---------------\n");
    
  for (int i = 300; i >= 0; i -= 20) {
    printf("%3d\t %9.1f\n", i, (i - 32) * (5.0 / 9.0));
  }
    
  return 0;
}
