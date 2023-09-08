#include<stdio.h>
int main(){
     //reamainder
     int a,b;
    printf("enter first number=");
    scanf("%d",&a);
    printf("enter second number=");
    scanf("%d",&b);
    int q=a/b;
    int r=a-(b*q);
    printf("remainder=%d",r);
    //addition
    int a,b,c;
    printf("enter a numbers:");
    scanf("%d", &a);
    printf("enter another number:");
    scanf("%d",&b);
    c=a+b;
    printf("the result c = %d",c);
    //charater is always a single element
    char ch='s';
    printf("%d",ch); 
//ASCII VALUES -> A=65 , a= 97
     return 0;




}