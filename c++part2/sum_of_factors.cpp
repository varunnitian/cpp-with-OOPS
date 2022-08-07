#include<iostream>
using namespace std;
int main(){
    cout<<"sum of the factors of a number"<<endl;
    cout<<"enter the number n:"<<endl;
    int n,sum=0;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
    if (n%i==0)
    {
        sum+=i;
        cout<<sum<<endl;
    }
    }
    return 0;
}