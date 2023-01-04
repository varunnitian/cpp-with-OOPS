#include<bits\stdc++.h>
#define ull unsigned long long 
using namespace std;
ull factorial(int n){
    ull fact=1;
    for (ull i = 2; i <=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
   cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}