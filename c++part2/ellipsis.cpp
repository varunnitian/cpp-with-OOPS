// #include<iostream>
// using namespace std;
// int sum(int n,...){
//     va_list list;
//     va_start(list,n);
//     int x;
//     int s=0;
//     for (int i = 0; i < n; i++)
//     {
//         x=va_arg(list,int);
//         s+=x;
//     }
//     return s;
// }
// int main(){
//     cout<<sum(2,10,20,30);
//     return 0;
// }
#include<iostream>
#include<cstdarg>
using namespace std;
int sum(int n,...){
    va_list list;
    va_start(list,n);
    int x;
    int s=0;
    for(int i=0;i<n;i++){
        x=va_arg(list,int);
        s+=x;
    }
    return s;
}
int main(){
    cout<<sum(3,1,2,3);
    return 0;
}