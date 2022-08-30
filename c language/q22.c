// program to print the the table in reverse
#include<stdio.h>
int main(){
    int n;
    printf("enter no = ");
    scanf("%d",&n);

    for(int i=10;i>=1;i--)
    {
        printf("%d\n",n*i);
    }
    return 0;
}