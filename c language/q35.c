// program of sum of first n natural number using recurrsion
#include<stdio.h>

// recursive function prototype
int sum(int n);

int main(){
    printf("sum is : %d",sum(5));
    return 0;
}
// recursive function defination 
int sum(int n){
    if(n==1){
        return 1;
    }
 
    int sumN1=sum(n-1);  // sum 1 to n
    int sumN=sumN1+n;
}