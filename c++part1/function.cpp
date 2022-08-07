#include<iostream>
using namespace std;
// float add(float x,float y) {
//     float z;
//     z=x+y;
//     return z;
// }
// int main() {
// float x=2.5,y=5.5;
// float z;
// z=x+y;
// add(x,y);
// cout<<"the sum is "<<z<<endl;    
    // return 0;
// }
int maxim(int a,int b,int c){
    if (a>b && a>c)
    {
        return a;
    }
    else if(b>c)
    {
        return b;
    }
    else 
    {
        return c;
    }
    
}
int main() {
    int x=10,y=15,z=5,r;
    r=maxim(x,y,z);
    cout<<r<<endl;
    return 0;
}