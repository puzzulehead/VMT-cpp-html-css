#include <stdio.h>
int main()
{
    //    // take positive integer input and tell if it is even or odd
        int x;
        printf("enter a number = ");
        scanf("%d",&x);
        if (x%2==0)
        {
            printf("even number");
        }
        else{
            printf("odd number");
        }
    //    //QUESTION : any year is input through thr keyboard. Write a program to
    //    //determine whether the year is a leap year or not.(considering
    //    //leap year occurs after every 4 years)
       int x ;
       printf("enter year : ");
       scanf("%d",&x);
       if (x%4==0)
       {
        printf("leap year");
       }
       else{
        printf("not a leap year");
       }
    //QUESTION: take integer input and print the absolute value of the integer
    int x;
    printf("enter a number : ") ;
    scanf("%d",&x);
    if (x<0)
    {
        x=x*(-1);
    }
    printf("the absolute value is : %d",x);

    //QUESTION: GIVEM THE LENGTH AND BREADTH OF A RECTANGLE , WRITE A PROGRAM TO FIND WHETHER THE AREA OF THE RECTANGLE IS GREATER THAN ITS PERIMETER.
    int length , breadth;
    printf("enter length of the rectangle = ");
    scanf("%d",&length);
    printf("enter breadth of the rectangle = ");
    scanf("%d",&breadth);
    int area = length * breadth;
    int perimeter= 2*(length+breadth);
    if (area>perimeter)
    {
        printf("area greater than perimeter");
        /* code */
    }
    else{
        printf("area less than perimeter");
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

       // QUESTION:TAKE 3 POSITIVE INTEGERS INPUT AND PRINT THE GREATEST OF THEM.
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
        //QUESTION:TAKE 3 NUMBERS INPUT AND TELL IF THEY CAN BE SIDES OF A TRAINGLE

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
   // NESTED IF ELSE
    int a, b, c;
    printf("enter a number : ");
    scanf("%d", &a);
    if (a % 5 == 0)
    {
        if (a % 3 == 0)
        {
            printf("the number is divisible by 5 and 3");
        }
        else{
            printf("the number is not divisibile by 5 and 3");
        }
        
    }
    else{
        printf("the number is not divisible by 5 and 3");
    }
  
}
//'==' checks the code if its true of false and '=' assigns the value and updation
//QUESTION:TAKE 3 POSITIVE INTEGERS INPUT AND PRINT THE GREATEST OF THEM.
 int a, b, c;
        printf("enter first number : ");
        scanf("%d", &a);
        printf("enter second number : ");
        scanf("%d", &b);
        printf("enter third number : ");
        scanf("%d", &c);
        if(a>b){
            if(a>c)
            printf("%d is greatest",a);
            else
            printf("%d is greatest",c);
        }
        else{
            if(b>c)
            printf("%d is greatest",b);
            else
            printf("%d is greatest",c);
        }


 //QUESTION:IF THE AGES OF RAM,SHYAM AND AJAY ARE UNPUT THROUGH THE KEYBOEAD, WRITE A PROGRAM TO DETERMINE THE YOUNGEST OF THE THREE.
 int a,b,c;
 printf("enter ram's age : ",a);
 scanf("%d",&a);
 printf("enter shyam's age : ",b);
 scanf("%d",&b);
 printf("enter ajay's age : ",c);
 scanf("%d",&c);
 if(a<b){
    if(a<c)
    printf("%d is the youngest",a);
    else
    printf("%d is the youngest",c);
 }
 else{
    if(b<a)
    printf("%d is the youngest",b);
    else
    printf("%d is the youngest",c);
 }
 

}