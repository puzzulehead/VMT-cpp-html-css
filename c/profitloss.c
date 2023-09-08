#include <stdio.h>
int main()
{
    // //if cost price and selling price of an item is input through the keyboard,write a program to determine whether the seller has made profit or incurred loss. And determine how much profit he made or loss he incurred.
    int x, y, z;
    printf("enter cost price : ");
    scanf("%d", &x);
    printf("enter selling price : ");
    scanf("%d", &y);
    z = y - x;
    if (x < y)
    {
        printf("The profit is = %d", z);
    }
    if (x > y)
    {
        printf("loss = ");
        if (z < 0)
        {
            z = z * (-1);
        }
        printf("%d", z);
    }
    //use of && and ||
    QUESTION: TAKE POSITIVE INTEGER INPUT AND TELL IF IT IS A THREE DIGIT NUMBER OR NOT.
    int x;
    printf("enter a number : ");
    scanf("%d",&x);
    if (x>99 && x<1000)
    {
        printf("it is a three digit number");

    }
    else{
        printf("it is not a three digit number");
    }
    //QUESTION:TAKE A POSITVE INTEGER INTEGER INPUT AND TELL IF IT IS DIVISIBLE BY 5 AND 3.

    int x;
    printf("enter  a number : ");
    scanf("%d",&x);
    if (x%5==0 && x%3==0)
    {
        printf("the number is divisible by 5 and 3");

    }
    else{
        printf("the number is not divisible by 5 and 3");
    }
    // 'or' (||)
    int x;
    printf("enter  a number : ");
    scanf("%d",&x);
    if (x%5==0 || x%3==0)
    {
        printf("the number is divisible by 5 or 3");

    }
    else{
        printf("the number is not divisible by 5 or 3");
    }

    QUESTION:TAKE 3 POSITIVE INTEGERS INPUT AND PRINT THE GREATEST OF THEM.
    int a, b, c;
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);
    printf("enter third number : ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a is the greatest integer");
    }
    if (b > a && b > c)
    {
        printf("b is the greatest integer");
    }
    if (c > a && c > b)
    {
        printf("c is the greatest integer");
    }
    QUESTION:TAKE 3 NUMBERS INPUT AND TELL IF THEY CAN BE SIDES OF A TRAINGLE

    int a, b, c;
    printf("enter first SIDE : ");
    scanf("%d", &a);
    printf("enter second SIDE : ");
    scanf("%d", &b);
    printf("enter third SIDE : ");
    scanf("%d", &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        printf("they can be the sides of a triangle");
    }
    int a,b;
    printf("enter cp : ",a);
    scanf("%d",&a);
    printf("enter sp : ",b);
    scanf("%d",b);
    if(a>b){
        printf("loss");
    }
    else if(b>a){
        printf("profit");
    }
    else{
        printf("no loss no profit");
    }

    int n;
    printf("enter marks", n);
    scanf("%d", &n);
    if
    
        (n >= 91){
            printf("excellent");
    }
    else if (n >= 81)
    {
        printf("very good");
    }
    else if (n >= 71)
    {
        printf("good");
    }
    else if (n >= 61)
    {
        printf("can do better");
    }
    else if (n >= 51)
    {
        printf("average");
    }
    else if (n > 41)
    {
        printf("below average");
    }
    else
    {
        printf("fail");
    }
}