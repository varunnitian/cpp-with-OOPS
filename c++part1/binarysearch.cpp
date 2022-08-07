#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int start=0,end=4;
    int key;
    cout<<"enter the key:"<<endl;
    cin>>key;
while(start <= end)
{
    int mid=(start)+((end-start)/2);
if (key==a[mid])
{
    cout<<"key is found at index:"<<mid<<endl;
}
else if (key<a[mid])
{
    end=mid-1;
    return end;
}
else
{
    start=mid+1;
    return start;
}   
}
cout<<"key not found"<<endl;
    return 0;
}