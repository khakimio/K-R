/*

  Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank.

 */

#include <stdio.h>

int main(void)
{
  int c, flag = 0;
    
  while ((c = getchar())!= EOF) {
    if (c == ' '){
      if (!flag) {
	flag = 1;
	putchar(c);
      }
    } else {
      flag = 0;
      putchar(c);
    }
  }
    
  return 0;
}
