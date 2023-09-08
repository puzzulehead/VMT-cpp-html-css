#include<stdio.h>
void main(){

//     int val = 4;
//     float var = 3.4252545;
//     printf("val is %d and var is %f",val,var);
int code;
char symbol;
printf("input an ascii code(0 to 127): ");
scanf("%d",&code);
symbol = code;
printf("the symbol corresponding to %d is %c\n",code,symbol);
 }