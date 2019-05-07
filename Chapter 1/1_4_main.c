/*

  Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.

 */

#include <stdio.h>

int main() {
    
  float fahr, celsius;
  int low = 0, step = 10, upper = 100;
    
  celsius = low;
    
  printf("celsius     fahr\n");
  printf("---------------\n");
    
  while (celsius <= upper) {
        
    fahr = celsius  * (9.0 / 5.0) + 32;
    printf("%3.0f\t %6.1f\n", celsius, fahr);
    celsius +=step;
  }
    
  return 0;
}
