#include<iostream>
using namespace std;
class parent{
    public:
    void display(){
        cout<<"this displays parent"<<endl;
    }
};
class child:public parent{
    public:
    void display(){
        cout<<"this displays child"<<endl;
    }
};
int main()
{
    // parent p;
    // child *c=&p;
    // c->display();

     child c;
    parent *p=&c;
    p->display();
    return 0;
}