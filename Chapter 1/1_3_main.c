/*
  
  Exercise 1-3. Modify the temperature conversion program to print a heading above the table.

*/

#include <stdio.h>

int main() {
    
  float fahr, celsius;
  int low = 0, step = 20, upper = 300;
    
  fahr = low;
    
  printf("far     celsius\n");
  printf("---------------\n");
    
  while (fahr <= upper) {
        
    celsius = (5.0 / 9.0) * (fahr - 32);
    printf("%3.0f,\t %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
    
  return 0;
}
