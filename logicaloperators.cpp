#include<iostream>
using namespace std;
int main(){
    bool exp1=true;
    bool exp2=false;

    cout<<(exp1&&exp2)<<endl;//yaha par FALSE(0) ayega//(&&)ka mtlb logical AND aur jab dono expression 'TRUE' honge tab result bhi TRUE ayega
    cout<<(exp1||exp2)<<endl;//yaha par TRUE(1)//(||)ka mtlb logical OR jab dono answers 'FALSE' honge tab hi result FALSE ayega
    cout<<(!exp1)<<endl;//false (!)ka mtlb logical NOT
    cout<<(!exp2)<<endl;//true
    return 0;







}
