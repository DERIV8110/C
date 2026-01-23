#include <stdio.h>
/* #define variable name value*/
int main()
/* define datatype of variable in loop*/
{      int fahr;
       for(fahr=0;fahr<=300;fahr+=20){
       printf("%3.2d %3.2f\n",fahr,(5.0/9.0)*(fahr-32));
       }
       return 0;
}