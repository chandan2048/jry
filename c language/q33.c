// write function to calculate area of a square,a circle and rectangle
#include<stdio.h>

// function prototype
float AreaSquare(float side);
float AreaCircle(float radius);
float AreaRectangle(float l,float b);

int main(){
    float l= 10;
    float b=10;
    printf("\narea of rectangle : %f",AreaRectangle(l,b));
    float side=5;
    printf("\n area of square is : %f",AreaSquare(side));
    float radius = 5;
    printf("\n Area of circle is : %f",AreaCircle(radius));
    return 0;
}
// function declaration
float AreaSquare(float side){
return side*side;  
}
float AreaCircle(float radius){
    return 3.14*radius*radius;
}
float AreaRectangle(float l,float b){
    return l*b;
}