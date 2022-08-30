//  program to keep taking no as input until user enter no multiple of 7
#include<stdio.h>
int main(){
    int n;

    do{
        printf("enter no = ");
         scanf("%d",&n);

         if(n%7==0){   // multiple of 7 or not if n==0 then multiple else not 
            break;
         }
    }while(1);

    printf("%d is multiple of 7 ",n);

    return 0;
}
