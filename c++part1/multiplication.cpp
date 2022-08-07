#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"multiplication table"<<endl;
    cout<<"enter the number n";
    cin>>n;
    for (int i = 1; i <=10; i++)
    {
    int k;
    k=i*n;
    cout<<k<<endl;     
    }
    
    return 0;
}