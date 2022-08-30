 // program to print three subject marks using array
 #include<stdio.h>
 int main(){

int marks[3];

printf("mark_physic=");
scanf("%d",&marks[0]);
printf("mark_chemistry=");
scanf("%d",&marks[1]);
printf("mark_computer=");
scanf("%d",&marks[2]);

printf("mark_physic=%d, mark_chemistry=%d, mark_computer=%d",marks[0],marks[1],marks[2]);

    return 0;
 }