#include<iostream>
using namespace std;
int main(){
    int n,r,sum=0,m;
    cin>>n;
    m=n;
    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+(r)*(r)*(r);
    }
    if(sum==m){
        cout<<"number is armstrong number"<<endl;
    }
    else
    {
        cout<<"number is not armstrong number"<<endl;
    }
    return 0;
}