// program to write a function to find square
// application of pointers call by value function  
#include<stdio.h>

void square(int n);
void _square(int *n);

int main(){
    int number = 4;
    square(number);
    printf("number=%d\n",*number);

  square(&number);
   printf("number = %d\n",number);
      return 0;
}
// call by value pointer
void _square(int *n){
    *n=(*n)*(*n);
    printf("square = %d\n",*n);
    }