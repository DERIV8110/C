#include <stdio.h>

int main() {
       int ch;
       int count;
       count = 1;

       printf("enter lines to count: ");

       while((ch = getchar())!= '#'){   /* USE # EVERYTIME AFTER ENTERING NUMBER
                                          AND OPERATOR AS INPUT TERMINATION OF
                                          CALCULATOR*/
              if (ch == '\n'){
                     count++;
              };
       };
       printf("total number of lines %d\n",count);
       return 0;
}
/*ALTERNATIVELY YOU CAN USE putchar() TO MAKE A CALCULATOR
WHICH STORES HISTORY*/
/*ALSO A SIMPLE NOTEPAD APP. SIMILARLY*/
