#include<iostream>
using namespace std;
int main(){
    // length of string
// string str="welcome";
// int count=0;
// for (int i = 0; str[i]!='\0'; i++)
// {
//     count++;
// }
// cout<<"length is : "<<count<<endl;
// string str="welcome";
// string::iterator it;
// int count=0;
// for (it=str.begin();it!=str.end();it++)
// {
//     count++;
// }
// cout<<"length is : "<<count<<endl;
// change cases of letter
string str="Welcome";
for (int i = 0;str[i]!='\0'; i++)
{
    str[i]=str[i]-32;
}
cout<<str<<endl;
    return 0;
}