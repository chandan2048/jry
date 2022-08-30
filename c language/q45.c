/* write a funtion to calculate sum , product &
average of 2 number and the average in the main function */

/* function function can pass only one value here we want 
three values we pointer function */

#include<stdio.h>

void doWork(int a,int b,int *sum,int *prod,int *avg);

int main(){
    int a=3,b=5;
    int sum, prod,avg;
    doWork(a,b,&sum,&prod,&avg);

    printf("sum=%d,prod=%d,avg=%d\n",sum,prod,avg);

    return 0;
}
void doWork(int a,int b,int *sum,int *prod,int *avg){
     *sum = a+b;
     *prod = a*b;
     *avg = (a+b)/2;
}