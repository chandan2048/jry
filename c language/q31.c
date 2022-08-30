// function to calculate price  gst in amount to be paid by user
// with parameter and no returntype
#include<stdio.h>

// function prototype
void calculateGst(float amount);
     
int main(){
    float amount;
    printf("enter amount = ");
    scanf("%f",&amount);
    calculateGst(amount);
    return 0;
}
// function defination
void calculateGst(float amount){
    amount=(amount*0.18)+amount;
    printf("total amount with Gst = %f",amount);
}