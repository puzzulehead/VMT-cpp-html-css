#include<stdio.h>
#include<math.h>
int primenumber(int n);
int main(){
   int n;
   printf("enter a number ");
   scanf("%d",&n);
   int primenumber(int n);
   printf("number n is prime if 1 otherwise consonant %d ",primenumber(n));
   return 0;
    
   }
   int primenumber(int n){
    int i,r;
    for(i=2;i<=n-1;i=i++){
        if(n%i==0){
            r=1;
        }
        else{
            r=0;
        }
    }
    