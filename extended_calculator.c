#include <stdio.h>
#include <math.h>
int main(){
       int x,y;
       char op;

       printf("enter a operator(+,-,*,/,modulo,sqrt(s),cbrt(c)):\n ");
       scanf(" %c",&op);


       switch (op){
       case '+':
              printf("enter first number: ");
              scanf("%d",&x);
              printf("enter second number: ");
              scanf("%d",&y);
              printf("sum: %d", x + y);
              break;
       case '-':
              printf("enter first number: ");
              scanf("%d",&x);
              printf("enter second number: ");
              scanf("%d",&y);
              printf("diff: %d", x - y);
              break;
       case '*':
              printf("enter first number: ");
              scanf("%d",&x);
              printf("enter second number: ");
              scanf("%d",&y);
              printf("prod: %d", x * y);
              break;
       case '/':
              printf("enter first number: ");
              scanf("%d",&x);
              printf("enter second number: ");
              scanf("%d",&y);
              printf("div: %d", x / y);
              break;
       case '%':
              printf("enter first number: ");
              scanf("%d",&x);
              printf("enter second number: ");
              scanf("%d",&y);
              printf("rem: %d", x % y);
              break;
       case 's':
              printf("enter first number: ");
              scanf("%d",&x);
              printf("sqrt: %f", sqrt(x));
              break;
       case 'c':
              printf("enter first number: ");
              scanf("%d",&x);
              printf("cbrt: %f", cbrt(x));
              break;
       default:
              break;
       }
       return 0;
}