#include<iostream>

namespace first{

    int x = 1;
}
namespace second{
    int x=2;
}
int main(){  //type 1
    int x= 0;
    std::cout<<second::x;
    return 0;

//this shows that entities can have same name as long as they have different namespace

}
 int main(){ //type 2
    using namespace first;
    std::cout <<x; 
    return 0;
    /*if we have some entity without a prefix
    of the namespace its assumed that 
    we r using the entity found within that namespace */
    
 }

 int main(){//type 2
    using namespace first;
    std::cout<<second::x;/*here if we want x found within the second
    namespace we need to prefix it with with second */
    return 0;
 } 