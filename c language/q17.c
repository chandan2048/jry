//  program to keep taking no as input until user enter an odd no
#include<stdio.h>
int main(){
    int n;

    do{
        printf("enter no = ");
         scanf("%d",&n);

         if(n%2!=0){
            break;
         }
    }while(1);

    printf("%d is an odd no ",n);

    return 0;
}