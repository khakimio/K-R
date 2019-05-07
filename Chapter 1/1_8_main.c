/*

  Exercise 1-8. Write a program to count blanks, tabs, and newlines.

 */


#include <stdio.h>

int main(void)
{
  int c, bl, tl, nl;
  bl = 0;
  tl = 0;
  nl = 0;
    
  printf("Input and press after: Ctrl+D.\n");
    
  while ((c = getchar()) != EOF)
    if (c == ' ')
      ++bl;
    else if (c == '\t')
      ++tl;
    else if (c == '\n')
      ++nl;
    
  printf("\n Space: %d, tabs: %d, newlines: %d.\n", bl, tl, nl);
    
  return 0;
}
