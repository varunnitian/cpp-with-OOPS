#include<iostream>
using namespace std;
int main(){
    int i,j,rows;
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows;j++){
            if((i+j)<=rows)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}