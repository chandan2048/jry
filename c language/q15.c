//  program to print the sum of  first n natural no
//  also print them into reverse

#include<stdio.h>
int main(){
    int n;
    printf("enter no = ");
    scanf("%d",&n);
   
    int sum=0;

    for(int i=0,j=n;i<=n,j>=1;i++,j--)
    {
        sum=sum+i;
        printf("\n%d",j);
    }
    printf("\nsum is : %d ",sum);

    
  /*  for(int i=n;i>=1;i--){
        printf("\n%d",i);
    }  */

    return 0;
}