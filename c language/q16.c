//  program to print the table of given no
#include<stdio.h>
int main(){
    int n ;
    printf("enter no = ");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
    printf("%d\n",n*i);
    }
    return 0;
}