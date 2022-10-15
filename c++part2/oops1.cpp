#include<iostream>
using namespace std;
class rectangle{
    public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    rectangle r;
    r.length=10;
    r.breadth=5;
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    return 0;
}