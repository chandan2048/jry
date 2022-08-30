#include<stdio.h>
/*call by value pointer
void printAddress (int n);

int main(){
     int n=4;
     printAddress ( n );
    printf("address of n is : %u\n",&n);

    return 0;
}

void printAddress(int n){
    printf("address of n is : %u\n",&n);
}
 */


// call by reference

void printAddress (int *n);

int main(){
     int n=4;
     printAddress ( &n );
    printf("address of n is : %u\n",&n);

    return 0;
}

void printAddress(int *n){
    printf("address of n is : %u\n",n);
}
 