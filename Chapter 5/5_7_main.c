#include <string.h>
#define LEN 1000
#define STOR 5000

int getline(char *, int);

int readlines (char *lineptr[], char *linestor, int maxlines) {
    
  int len, nlines;
  char line[LEN];
  char *p = linestor;
  char *linestop = linestor + STOR;
  nlines = 0;
    
  while ((len = getline(line, LEN)) > 0)
    if (nlines >= maxlines || p + len > linestor)
      return -1;
    else {
      line[len - 1] = '\0';
      strcpy(p, line);
      lineptr[nlines++] = p;
      p += len;
    }
  return nlines;
}

