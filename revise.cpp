//variables
//hello world print karna hai
//cout=character output
// <<=insetion operator, ye code me jo bhi iske baad follow karta hai wo use print lar deta hai
//cout<<"hello vik":
//always har statement ke baad :
//printf("hello vik"):
// jo bhi statement # se start ho use preprocessor directives kehte hai
// ye c++ processor ko kehta hai to include the iostream file
// iostream files are inbuilt header files, some pre written codes
//consists of basic input/output functions
//using namespace std mtlb,to use standard forms of input output
//int main is a function,it is the starting point of any c++ program,and it is necessary
//function is a block of codes,
// return 0 suggests that main function ends here,compiler code execute kar deta

#include<iostream>
using namespace std;

int main(){

cout<<"hello vik"<<endl;


    


// [VARIABLES]
// variables are used to store some data
//variables are named storage that contains some valur and this value can be varied
//suppose i have five apples and i want to store that info
//for storing a integer type data i should use (int)
//eg. int apples =5;
//eg. int apples
// apples= 6;
//apples = 10;
//eg int red_apples=5;
//eg int red Apples=5;
//variable name number se start nhi hoga
// apples and Apples are not same identifiers

 int apples;
 apples=5;
 cout<<"apples:"<<(apples)<<endl;
 cout<<"size of int:"<<sizeof(apples)<<endl;

 char sign='$';
 cout<<"sign:"<<sign<<endl;
 cout<<"size of char:"<<sizeof(sign)<<endl;

 bool flag =true;
 cout<<"flag:"<<flag<<endl;
 cout<<"size of bool:"<<sizeof(flag)<<endl;

 float score= 3.14;
 cout<<"score:"<<score<<endl;
 cout<<"size of float:"<<sizeof(score)<<endl;


 //integer(int) data type occupies 4 bytes or 32 bits in memory
//character (character)data type such 'a' , 'b' occupies 1 byte i.e 8 bits
//boolean (bool)data type consists of two values true or falsewhere 1 stands for true and 0 stands for false
//float data type is used to store decimal values i.e 3.14,6.08 ets and it occupies 4 bytes
//float data type has precision upto 7 decimal places
//and double has 15 decimal places and it occupies 8 bytes
//logical values are true false and boolean data type is used to show it
//t
cout<<"hello world"<<endl;

cout<<"enter a number:";
float num;


cin>>num;
cout<<"The entered number is:"<<num<<endl;


int n1 , n2;
cout<<"n1:";

cin>>n1;
cout<<"n2:";
cin>>n2;

int sum=n1+n2;
cout<<"sum:"<<sum<<endl;




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

