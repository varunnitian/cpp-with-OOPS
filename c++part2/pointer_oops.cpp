#include<iostream>
using namespace std;
class base{
    public:
    void fun1(){
        cout<<"this is fun1"<<endl;
    }
};

class derived:public base{
    public:
    void fun2(){
        cout<<"this is fun2"<<endl;
    }
};
int main(){
    derived d;
    base *ptr=&d;
    ptr->fun1();
    // ptr->fun2();
    return 0;
}
