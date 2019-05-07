#inlcude <stdio.h>

char buf = 0;

int getch() {
  int c;
  if (buf != 0)
    c = buf;
  else
    c = getchar();
  buf =0;
  return c;
}

void ungetch(int c){
  if (buf != 0)
    printf ("error\n");
  else
    buf = c;
}
  











