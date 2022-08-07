#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int a,b,c,r1,r2;
    cout<<"enter the coefficients a,b and c of quadratic equation"<<endl;
    cin>>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"the roots are :"<<r1<<r2<<endl;
     return 0; 
}