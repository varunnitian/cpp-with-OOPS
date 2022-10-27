#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breadth;
    public:
    rectangle();
    rectangle(int l,int b);
    void setLength(int l);
    void setBreadth(int b);
    int getLength(){return length;}
    int getbreadth(){return breadth;}
    int area(){
        return length*breadth;
        }
    int perimeter(){
        return 2*(length+breadth);
    }
};
class cuboid:public rectangle{
    private:
    int height;
    public:
    cuboid(int h){height=h;}
    int getHeight(){return height;}
    void setheight(int h){height=h;}
    int volume(){return getLength()*getbreadth()*height;}
};
int main(){
cuboid c(5);
c.setLength(10);
c.setBreadth(5);
cout<<c.volume()<<endl;
    return 0;
}
rectangle::rectangle()
{
    length=1;
    breadth=1;
}
rectangle::rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
void rectangle::setLength(int l){
    length=l;
}
void rectangle::setBreadth(int b){
    breadth=b;
}