#include <iostream>
using namespace std;
class A{
public:
    A(){cout<<"Create A"<<endl;}
    ~A(){cout<<"destory A"<<endl;}

};
class B:public A{
public:
    B(){cout<<"Create B"<<endl;}
    ~B(){cout<<"destory B"<<endl;}    
};
int main(){
  
//    B b;  //Test1

//Test2
    B* b = new B();
    A* a = b;
    delete b;  //Test21
    // delete a;  //Test22
   
    return 0;
}