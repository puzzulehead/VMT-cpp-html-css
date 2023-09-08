//while some condition is true code can be executed

//while(condition){

//code
//}
//int i=1
//while (i<5){
   // cout<<i;
   // i++;//1 se 2 ho jayegi aur fir dubara check karega 5 se kam hai ki nhi
    //fir 2 se 3 fir 3 se 4 fir 4 se 5
    //ab i 5 se kam nhi hai to hum loop se bahar aa jayenge

//print the sum of the first n natural numbers,where n is the input
//syntax for for loop 
/*initialisation ek baar hoti hai fir conditon check hoti hai agar wo true hogi to loop body check karega fir updation chck karega aur fir upadation execute hoga jab tak condition false n ho jaye*/

#include <iostream>
using namespace std;
int main(){


//do while loop
//syntax  : do
//{
//c++ statements;
//while } (condition)
int i =1;
do{
    cout<<i<<endl;
    i++;
}while(i<=20);
return 0;

}