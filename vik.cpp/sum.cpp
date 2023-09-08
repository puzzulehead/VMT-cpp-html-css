#include<iostream>
using namespace std;
int main(){

int a,b;
cout<<"a:";
cin>>a;
cout<<"b:";
cin>>b;

int c;
c=b;
b=a;
a=c;
cout<<"a:"<<a<<endl;
cout<<"b:"<<b<<endl;


//we need to swap two numbers taking using user input
int num1,num2;
cin>>num1>>num2;
cout<<"value of num1:"<<num1<<endl;
cout<<"value of num2:"<<num2<<endl;
//num1=4
//num2=5
//num1=num2.....5
//num2=num1.....5
//that why we need a third variable for swaping


int temp;
temp=num1;//num1=5
num1=num2;//num2=6
num2=temp;
cout<<"value of num1:"<<num1<<endl;
cout<<"value of num2:"<<num2<<endl;
}


