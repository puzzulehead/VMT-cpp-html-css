#include<iostream>
int main(){
    //type conversion= conversion of a value of one data type to another
    //    implicit = automatic( mtlb jo uska real data type tha)
    //     explicit = precede value with new data  ( int)
    //double x = (int)3.14;
    //std::cout<<x;
    //char x = 100;
    //std::cout<<(int)x;//according to the ascii table it will print d
    int correct = 8;
    int questions = 10;
    int score = (double)correct / questions * 100;//double isliye kyuki 8/10 0.8 hota hai aur uske bina score 0 hi read hoga decimal ke baad wale number nahi
    std::cout<<score<<"%";





return 0;
}