#include<iostream>
using namespace std;
class base{
public:
 virtual void fun1()=0;
 virtual void fun2()=0;
};
class derived:public base{
    public:
    void fun1(){
        cout<<"this is fun1"<<endl;
    }
    void fun2(){
        cout<<"this is fun2"<<endl;
    }
};
int main(){
    derived d;
    d.fun1();
    d.fun2();
    return 0;
}