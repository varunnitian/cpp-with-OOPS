#include<iostream>
using namespace std;
int main(){
    cout<<"factors of a number"<<endl;
    cout<<"enter the number n:"<<endl;
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
    if (n%i==0)
    {
        cout<<i<<endl;
    }
    }
    return 0;
}