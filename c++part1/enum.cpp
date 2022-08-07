#include<iostream>
using namespace std;
enum day{mon,tue=4,wed,thu,fri,sat,sun};
int main() {
    day d;
    d=tue;
    cout<<mon;
    cout<<tue;
    cout<<wed;
    cout<<thu;
    cout<<fri;
    cout<<sat;
    cout<<sun;
    return 0;
}