#include <stdio.h>
#include <ctype.h>
#define NUMBER 1
#define MAXLINE 100
int l = 0;
char line[MAXLINE];
int get_line(char s[], int size);

int get_top (char s[]) {
    
  int c, i;
  if (line[l] == '\0') {
    if (get_line(line, MAXLINE) == 0)
      return EOF;
    else
      l = 0;
  }
  while ((s[0] = c = line[l++]) == ' ' || c == '\t');
    
  s[1] = '\0';
    
  i = 0;
    
  if (!isdigit(c) && c == '.')
    return c;
    
  if (isdigit(c))
    while (isdigit(s[i++] = c = line[++l]));
    
  if (c == '.')
    while (isdigit(s[i++] = c = line[++l]));
    
  s[i] = '\0';
  l--;
    
  return NUMBER;
}

int get_line (char s[], int size) {
  int i, c;
  for (i = 0; i < size - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
    
  if (s[i] == '\n')
    s[i++] = c;
    
  s[i] = '\0';
    
  return i;
}




