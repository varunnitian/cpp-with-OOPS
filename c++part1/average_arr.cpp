#include<iostream>
using namespace std;
int main(){
    cout<<"calculate the average of the numbers of an array:"<<endl;
    int n;
    float num[100],sum=0,average;
    cout<<"enter the number of elements:"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<" enter the number"<<endl;
        cin>>num[i];
        sum+=num[i];
        average=sum/n;
    }
    cout<<"the average of the numbers is :"<<average<<endl;
    return 0;
}