#include <stdio.h>
void swap(int *a,int *b);
int main(){
    int num1, num2;
    printf("enter two number ");
    scanf ("%d%d",&num1,&num2);
    printf("before swapping num1 = %d and num2= %d\n",num1,num2);
    swap(&num1,&num2);
    printf("after swapping num1 = %d and num2 = %d",num1,num2);
    return 0;
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
    