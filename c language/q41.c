 //  pointers manipulation
 #include<stdio.h>
int main(){
    int x;
    int *ptr;
    // mean of these two lines
    ptr=&x;
    *ptr=0;  //x=0
  // output is same
    printf("x=%d\n",x);  // 0
    printf("*ptr =%d\n",*ptr);   //0

// mean of these line
    *ptr +=5;
    printf("x=%d\n",x);  // 5
    printf("*ptr =%d\n",*ptr);  //5
 
    // means of these lines
    (*ptr)++;
    printf("x=%d\n",x);  
    printf("*ptr =%d\n",*ptr); 
    return 0;
}