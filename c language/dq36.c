// program  to find factor of n using recursion
#include<stdio.h>

// recursive function prototype
int fact(int n);

int main(){
  printf("factorial is : %d",fact(5));
    return 0;
}

// recursive function defination 
int fact(int n){
    if(n==0){
     return 1;
    }
    int factNm1=fact(n-1); // fact 1 to n
    int factN=factNm1*n;
    return factN;
}