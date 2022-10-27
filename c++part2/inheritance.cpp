#include<iostream>
using namespace std;
class base{
    public:
    int a;
    void display(){
        cout<<"display the word "<<a<<endl;
    }
};
class derived:public base{
    public:
    void show(){
        cout<<"show the alphabet"<<endl;
    }
};
int main(){
derived d;
d.a=10;
d.display();
d.show();
    return 0;
}