#include<iostream>
int add(int a,int b){
    int c=a+b;
    return c;
}
int add(int a,int b,int c){
    int d=a+b+c;
    return d;
}
float add(float i,float j){
    float k=i+j;
    return k;
}
using namespace std;
int main(){
    int a=2,b=3,d;
    int c;
    c=add(a,b);
    d=add(a,b,c);
    cout<<c<<endl;
    cout<<d<<endl;
    float i=2.5,j=5.2,k;
    k=add(i,j);
    cout<<k<<endl;
    return 0;
}