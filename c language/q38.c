// write a function to calculate percentage of a student from marks in sci, math,hindi
#include<stdio.h>

float calcPercentage(int sci,int math, int hindi);

int main(){
 int  sci=36;
 int math=36;
 int hindi=39;
 printf("percentage is : %f",calcPercentage(sci, math, hindi));
    return 0;
}
float calcPercentage(int sci,int math, int hindi){
    return((sci+math+hindi)/3);
}

