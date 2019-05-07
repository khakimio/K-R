/* Exercise 1-12.

   Write a program that prints its input one word per line.
 */

#include <stdio.h>
#define TRUE  1
#define FALSE 0

int main()
{
  int c, blank;
  blank = FALSE;
    
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (blank == FALSE)
	putchar('\n');
      blank = TRUE;
    } else {
      blank = FALSE;
      putchar(c);
    }
  }
  return 0;
}
