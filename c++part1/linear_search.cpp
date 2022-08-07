#include<iostream>
using namespace std;
int main(){
    int a[5],n=5,i,key;
    cout<<"enter the numbers:"<<endl;
    for (i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    cout<<"enter the number to search:"<<endl;
    cin>>key;
    for (int i = 0; i < 5; i++)
    {
        if (a[i]==key)
        {
            cout<<"key is found at index:"<<i<<endl;
        }
    }
    cout<<"key not found"<<endl;
    return 0;
}