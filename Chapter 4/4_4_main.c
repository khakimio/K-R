#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100
#define NUMBER '0'

int get_top(char s[]);
void push_stack(double f);
double pop_stack(void);
void clear_stack(void);


int main (){
  int type;
  double temp, temp1;
  char s[MAXSIZE];
    
  while ((type = get_top(s)) != EOF) {
        
    switch (type) {
    case NUMBER:
      push_stack(atof(s));
      break;
    case '+':
      push_stack(pop_stack() + pop_stack());
      break;
    case '*':
      push_stack(pop_stack() * pop_stack());
      break;
    case '-':
      temp = pop_stack();
      push_stack(pop_stack() - temp);
      break;
    case '/':
      temp = pop_stack();
      if (temp != 0.0)
	push_stack(pop_stack() / temp);
      else
	printf("Error: zero division\n");
      break;
    case 'c':
      clear_stack();
      break;
    case 'u':
      temp = pop_stack();
      printf("%.1f\n", temp);
      push_stack(temp);
      break;
    case 'r':
      temp = pop_stack();
      temp1 = pop_stack();
      push_stack(temp);
      push_stack(temp1);
      break;
    case 'd':
      temp = pop_stack();
      push_stack(temp);
      push_stack(temp);
      break;
    case '\n':
      printf("Result: %.2f\n", pop_stack());
      break;
    default :
      printf("Unknow\n");
      break;
    }
  }
  return 0;
}

#pragma mark STACK
#define STACKSIZE 100
double stack_array[STACKSIZE];
int point = 0;

void push_stack(double f){
  if (point < STACKSIZE)
    stack_array[point++] = f;
  else
    printf("Error: Full stack\n");
}

double pop_stack() {
  if (point > 0)
    return stack_array[--point];
  else
    printf("Error: Empry stack\n");
  return 0.0;
}

void clear_stack(){
  point = 0;
}

#pragma mark GETCH / UNGETCH
#define BUFFERSIZE 100

int point_buffer = 0;
char buffer[BUFFERSIZE];

int getch_1 (void){
  return (point_buffer > 0) ? buffer[--point_buffer] : getchar();
}

void ungetch_1 (int c){
  if (point_buffer < BUFFERSIZE)
    buffer[point_buffer++] = c;
  else
    printf("Full buffer\n");
}

#pragma mark GETOP

int get_top(char s[]){
  int c, i;
    
  while ((s[0] = c = getch_1()) == ' ' || c == '\t');
  s[1] = '\0';
    
  if (!isdigit(c) && c != '.')
    return c;
    
  i = 0;
  if(isdigit(c))
    while ((isdigit(s[++i] = c = getch_1())));
    
  if (c == '.')
    while ((isdigit(s[++i] = c = getch_1())));
    
  s[i] = '\0';
  if (c != EOF)
    ungetch_1(c);

  return NUMBER;
}
               

    


