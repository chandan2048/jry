// function to convert celsius into fahrenheit
#include<stdio.h>

//Recursive function prototype
float convertTemp(float celsius);

int main(){
    float far=convertTemp(0);
    printf("fahrenheit is : %f",far);
        return 0;
}

//recursive function defination 
float convertTemp(float celsius){
   float far=celsius*(9.0/5.0)+32;
   return far;
}