#include<iostream>
using namespace std;
int main(){
int a[6]={8,6,3,9,7,4};
for (int &x:a)
{
    cout<<++x<<endl;
}
return 0;
}