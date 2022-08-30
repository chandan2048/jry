// program to print all no from 0 to 10 except 5
#include<stdio.h>
int main(){
    int i;
    
    for(i=0;i<=10;i++)
    {
        if(i==5){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}