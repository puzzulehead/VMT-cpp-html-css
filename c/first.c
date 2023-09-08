#include<stdio.h>
int main(){//use of escape sequence '\n'
  
    int x =5;
    printf("%d",x);
    x=6;
    printf("\n%d",x);
    x=x-999;
    printf("\n%d",x);
    return 0;
    //%d is for integers
   // %f is for float data type
    
    float x = 5.0;
    float y = 2.0;//5/2 = 2 integer ka operation integer hi hoga
    printf("\n%f",x+y);
    printf("\n%f",x-y);
    printf("\n%f",x/y);
    printf("\n%f",x*y);

    //volmune of  a sphere

    float radius;
    printf("enter radius = ");
    scanf("%f",&radius);
    float pi = 3.1415;
    float area = pi * radius * radius;
    printf("the area of the circle = %f",area);
    
   


}