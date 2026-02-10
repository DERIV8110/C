#include <stdio.h>
#include <math.h>
int main(){
       int x,y;
       char op;
       printf("enter first number: ");
       scanf("%d",&x);
       printf("enter a operator(+)(-)(*)(/)(percent): ");
       scanf(" %c",&op);
       printf("enter second number: ");
       scanf("%d",&y);

       switch (op){
       case '+':
              printf("sum: %d", x + y);
              break;
       case '-':
              printf("sum: %d", x - y);
              break;
       case '*':
              printf("sum: %d", x * y);
              break;
       case '/':
              printf("sum: %d", x / y);
              break;
       case '%':
              printf("sum: %d", x % y);
              break;
       default:
              break;
       }
       return 0;
}