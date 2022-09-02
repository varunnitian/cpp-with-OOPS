#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number n:"<<endl;
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"factorial of the number "<<n<<" is "<<fact<<endl;
    return 0;
}