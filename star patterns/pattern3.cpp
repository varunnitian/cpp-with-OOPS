#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    int a[i][j];
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}