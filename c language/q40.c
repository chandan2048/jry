// pointer syntax 
#include<stdio.h>
int main(){
    
    int age =22;
    int *ptr=&age;

    /* address  print 
    printf("%p\n",&age);
    printf("%u\n",&age);
    printf("%u\n",ptr);
    printf("%u\n",&ptr);  */

    // value  print
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    
    return 0;
}