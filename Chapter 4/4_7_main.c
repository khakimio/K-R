#include <stdio.h>
#include <string.h>


int main (){
  
  return 0;
}

void ungets (char s[]) {
  for (int i = 0; i < strlen(s); ++i)
    ungetch(s[--i]);
}
  


    


