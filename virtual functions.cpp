#include<iostream>
using namespace std;
class basiccar{
    public:
    virtual void start(){
        cout<<"start basic car"<<endl;
    }
};
class advancedcar:public basiccar{
    public:
    void start(){
        cout<<"start advanced car"<<endl;
    }
};
int main(){
basiccar *b=new advancedcar();
b->start();
    return 0;
}