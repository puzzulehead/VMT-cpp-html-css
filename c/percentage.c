#include<stdio.h>
int main(){
     //program for calculating percentage
    float a,b,c,d,e,f;
    printf("\nMaths Score = ");
    scanf("%f",&a);
    printf("\nEnglish Score = ");
    scanf("%f",&b);
    printf("\nScience Score = ");
    scanf("%f",&c);
    printf("\nSocial Science Score = ");
    scanf("%f",&d);
    printf("\nHindi Score = ");
    scanf("%f",&e);
    printf("\npercentage = %f",(a+b+c+d+e)*100/500);

}