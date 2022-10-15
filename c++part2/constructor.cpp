#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breadth;
    public:
    void setLength(int l){
        if(l<0)
        length=1;
        else
        length=l;
    }
    void setBreadth(int b){
        if(b<0)
        breadth=1;
        else
        breadth=b;
    }
    int getLength(int l){
        return length=l;
    }
    int getBreadth(int b){
        return breadth=b;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){
    rectangle r;
    r.setLength(10);
    r.setBreadth(5);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    return 0;
}