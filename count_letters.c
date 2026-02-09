#include <stdio.h>
int main(){
       int ch;
       int count;

       printf("enter character to count: ");

       for(count=0;ch = getchar()!= '#';count++)
        ;
       printf("total number of characters %d\n",count);
       return 0;
}
